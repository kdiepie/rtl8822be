#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x9a0d5edb, "module_layout" },
	{ 0x3846fd5d, "rtl_cam_delete_one_entry" },
	{ 0x5230ed32, "rtl_fw_cb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd236e014, "rtl_pci_probe" },
	{ 0x30defda1, "rtl_cam_get_free_entry" },
	{ 0xe06ffdaa, "param_ops_int" },
	{ 0xf530c8f2, "pci_read_config_byte" },
	{ 0x83919f6, "rtl_ps_disable_nic" },
	{ 0x6bee4d29, "rtl_btc_get_ops_pointer" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd366f39e, "rtl_get_tcb_desc" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x36a48fe2, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c5cf0a2, "param_ops_bool" },
	{ 0x8a35373c, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa7a35e5d, "show_it_mac" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e49da2, "__netdev_alloc_skb" },
	{ 0x35dcea03, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x847892c2, "rtl_hw_rate_to_m_rate" },
	{ 0xa30e6d8e, "rtl_ps_enable_nic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x15b6aa68, "dma_direct_map_page" },
	{ 0x74636cab, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9e4dd7c2, "rtl_signal_scale_mapping" },
	{ 0xf24a28e0, "request_firmware_nowait" },
	{ 0xce269bb8, "rtl_pci_suspend" },
	{ 0x4c1ef2e6, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd638c018, "rtl_pci_disconnect" },
	{ 0xfb75eb3b, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x856bfdd6, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7bdff94c, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1f9db189, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x608842e6, "rtl_cam_mark_invalid" },
	{ 0xf41ff601, "rtl_tx_report_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfe03abbf, "rtl_cam_del_entry" },
	{ 0x25c7e582, "rtl_cam_empty_entry" },
	{ 0x4bf576a7, "rtl_get_hal_edca_param" },
	{ 0x48fbb3a4, "__pci_register_driver" },
	{ 0xda716142, "rtl_halmac_get_ops_pointer" },
	{ 0xc0788e8d, "rtl_cam_reset_all_entry" },
	{ 0x6ec89ae6, "rtl_c2hcmd_enqueue" },
	{ 0xa9feb69d, "rtl_process_phyinfo" },
	{ 0xe64beae5, "skb_put" },
	{ 0x8280ae17, "rtl_phydm_get_ops_pointer" },
	{ 0x4b64836, "show_it_bb" },
	{ 0x999443a8, "dma_ops" },
	{ 0xb40f06f3, "rtl_get_tx_report" },
	{ 0x7a7b1a66, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,btcoexist,halmac,phydm_mod");

MODULE_ALIAS("pci:v000010ECd0000B822sv*sd*bc*sc*i*");
