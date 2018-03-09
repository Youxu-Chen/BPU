#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x56570447, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7c4b96b7, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0x1a28d412, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x260d6bfc, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xeb507969, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x947e7d95, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x7b53a39f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x830349c2, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0x9ff2b544, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x1b509eb1, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xa375fab3, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x3a906776, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xba7561f5, __VMLINUX_SYMBOL_STR(bmap) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5c0d46ca, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x81b3bbd, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc1131104, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0xf8843be6, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x91831d70, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf05a8535, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x32739b13, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4115d4c6, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x61b96b8a, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xe0cb0001, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x1ce0e50e, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xebab60f3, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xfd207903, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x76ce14fb, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd03110f6, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x70c8916b, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7efdef3, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x6cbc4bc4, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0xc6ed5258, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8304733a, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4fc4c921, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x48632005, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3142fe58, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0xab06121b, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x4ac24433, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xcbffb12d, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x403832ea, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe476e1bd, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xfd50eb13, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc1e72cf2, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x265b89f4, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5d0f803e, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x67a075ab, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x544b6a01, __VMLINUX_SYMBOL_STR(blk_integrity_compare) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf4b30e81, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xd2b981ab, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xea4725b8, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0xe8c7ae5b, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x9af9c33, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x6cf71733, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x6fea88ad, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x77bc8387, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x1e19f46e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x3e4048a2, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3fcc5d96, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1b3049d, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x23d8d530, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xc572f462, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x2fd889c0, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x279e4956, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x70cfb8dc, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x302cbd96, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7fb472a6, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x91550841, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xd38393c9, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6103ba76, __VMLINUX_SYMBOL_STR(blk_integrity_unregister) },
	{ 0x86b18334, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x17092b6, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x23d24813, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x46336a1b, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x8f180c60, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb3292532, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xd42027fa, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xa07ddcd6, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0xd782a2f9, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xb55173dd, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x109ae9b5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb9b13d76, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x812f216, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xd57ad190, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb511bfb7, __VMLINUX_SYMBOL_STR(blk_integrity_register) },
	{ 0x74651048, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6eebe093, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2C4177F26DEAA31CEE1CF91");
