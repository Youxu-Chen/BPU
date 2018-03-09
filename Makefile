LINUXROOT=/lib/modules/$(shell uname -r)/build  
  
all:  
	make -C $(LINUXROOT) SUBDIRS=`pwd` $(EXTRA_CFLAGS) KBUILD_VERBOSE=1 modules  
  
clean:  
	@rm .*.cmd -rf  
	@rm .tmp* -rf  
	@rm *.o -rf  
	@rm *.mod.* -rf  
	@rm *.ko -rf  
	@echo "Delete output files"  
  
  
obj-m += raid1.o  
obj-m += raid10.o  
obj-m += raid456.o  
obj-m += md-mod.o  
  
md-mod-objs     := md.o bitmap.o  
raid456-objs    := raid5.o  
