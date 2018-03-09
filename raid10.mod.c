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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x454769ea, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x2733a290, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x7c95f5db, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x67090795, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xd3c1c0ca, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x947e7d95, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xea3db59, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xb250c564, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0xf819cd3, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x68e27a26, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x165902d0, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x319c32fb, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x46456a72, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xb97f6ca0, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x23d24813, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b53a39f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x1b509eb1, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x7f68912d, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x2a9b2786, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x6be93285, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x57a69a09, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x1e19f46e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8468a810, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x7f45096d, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x8e9493ec, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4d2863b0, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x143eee77, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xdd5c1118, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfd8b7ad8, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0xe476e1bd, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x91550841, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x24f76e68, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xbcdba974, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x2cce37db, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x11c6303c, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x8916b6c7, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xea9357fe, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x828505dc, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x4fc4c921, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x412fc7c2, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x99718687, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x983a329, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x6b2091a7, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xf05bbf56, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x17092b6, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x6cf71733, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc572f462, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x91831d70, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9af9c33, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x260d6bfc, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x3a906776, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x10951761, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xebab60f3, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x6d9cb7c5, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x6fea88ad, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x109ae9b5, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2a334103, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x14303b66, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xcdda4371, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x2617113e, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "D0A1B37E7447F28A1F351CB");
