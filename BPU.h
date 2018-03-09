# include <linux/cache.h>
# include <linux/seqlock.h>
# include <linux/math64.h>
# include <linux/time64.h>
# include <linux/time.h>
#include <linux/blkdev.h>
#include <linux/kthread.h>
#include <linux/raid/pq.h>
#include <linux/async_tx.h>
#include <linux/module.h>
#include <linux/async.h>
#include <linux/seq_file.h>
#include <linux/cpu.h>
#include <linux/slab.h>
#include <linux/ratelimit.h>
#include <linux/nodemask.h>
#include <trace/events/block.h>
#include <asm/div64.h>
#include "raid5.h"
#include "md.h"
#include "raid0.h"
#include "bitmap.h"

#define lat_r 9
#define lat_w 29
#define T_heavy 500
#define T_light 100
#define T_skew 50
#define T_pre 3

static long choose_write_number = 0;
int avg_len_raid(struct r5conf *conf)
{
	int i;
	int sum=0;
	spin_lock_irq(&conf->device_lock);
	for(i=0;i<conf->raid_disks;i++)
		sum=sum+(long)(lat_r*conf->read_disk[i].counter+lat_w*conf->write_disk[i].counter);
	spin_unlock_irq(&conf->device_lock);
	do_div(sum,conf->raid_disks);
	//avg=sum>>3;
 	return sum;
}

void print_max_queue(struct r5conf *conf)
{
	int i;
	int max_queue=0;
	
	spin_lock_irq(&conf->device_lock);	
	for(i = 0; i < conf->raid_disks; i++)
		max_queue = max_queue < (conf->read_disk[i].counter+3*conf->write_disk[i].counter) ?  (conf->read_disk[i].counter+3*conf->write_disk[i].counter) : max_queue;
	spin_unlock_irq(&conf->device_lock);
	printk("^^^max_queue_length: %d^^^\n",max_queue);
}

unsigned long  gettime(void)
{
	struct  timespec64 ts;
	getnstimeofday64(&ts);
	return (unsigned long)(ts.tv_sec*1000000000+ts.tv_nsec);
}

void print_disk(struct r5conf *conf)
{
	int i;

	for(i=0;i<conf->raid_disks;i++)
		printk("---read_disk #%d = %d , write_disk = "
"%d\n",i,conf->read_disk[i].counter,conf->write_disk[i].counter);     

}


/*
 * flag == 0 : not decided which write method , judge process
 * flag == 1 : used rmw , judge process
 * flag == 2 : used rcw , judge process
 */
void judge_put_into_max_io(struct r5conf *conf, int rmw, int rcw,int 
*want_rmw,int *want_rcw, int flag)
{
	 int i;
	 int max_tmp;
	 int max_rmw = 0;
	 int max_rcw = 0;
	// choose_write_number++;
	 printk("choose_write_number = %ld\n",choose_write_number++);	 
	for(i=0;i<conf->raid_disks;i++)
	{
		if(*(want_rmw+i)==1)
		{
			spin_lock_irq(&conf->device_lock);					
			max_tmp=9*(conf->read_disk[i].counter)+ \
			29*(conf->write_disk[i].counter);
			max_rmw=max_tmp>max_rmw?max_tmp:max_rmw; 
			spin_unlock_irq(&conf->device_lock);
		}
		if(*(want_rcw+i)==1)
		{
			spin_lock_irq(&conf->device_lock);					
			max_tmp=9*(conf->read_disk[i].counter)+ \
			29*(conf->write_disk[i].counter);
			max_rcw=max_tmp>max_rcw?max_tmp:max_rcw; 
			spin_unlock_irq(&conf->device_lock);
		}		  
	}
	
	if(flag == 1)
	{
		if(max_rcw <= max_rmw)
			printk("***using rmw, put into max_io_queue! rmw = %d , rcw = %d , max_rmw = %d , max_rcw = %d\n",rmw,rcw,max_rmw,max_rcw);
	}
	else if(flag == 2)
	{
		if(max_rmw <= max_rcw)
			printk("***using rcw, put into max_io_queue! rmw = %d , rcw = %d , max_rmw = %d , max_rcw = %d\n",rmw,rcw,max_rmw,max_rcw);
	}
	else if(flag == 0)
	{
		if(rmw<rcw&&max_rmw>max_rcw)
			printk("***using rmw, put into max_io_queue! rmw = %d , rcw = %d , max_rmw = %d , max_rcw = %d\n",rmw,rcw,max_rmw,max_rcw);
		if(rcw<=rmw&&max_rcw>max_rmw)
			printk("***using rcw, put into max_io_queue! rmw = %d , rcw = %d , max_rmw = %d , max_rcw = %d\n",rmw,rcw,max_rmw,max_rcw);
	}
}

/*
 * dont't put into the max_io_queue, so just count the choose_write_number
 */
void show_total_choose_number(void)
{
	printk("choose_write_number = %ld\n",choose_write_number++);
}


/*
 * put pre-read into max_io_queue anyway, count the choose_write_number && print information
 */
void show_total_choose_number_print(void)
{
	printk("choose_write_number = %ld\n",choose_write_number++);
	printk("***using one, put into max_io_queue!\n");
}

