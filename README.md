# insmod /lib/hello.ko 
[   20.947288] Hello, World!


# insmod /lib/hello2.ko 
[   24.962517] Hello, World!
[   24.962657] Unhandled fault: page domain fault (0x81b) at 0x00000000
[   24.962853] pgd = d1e3c000
[   24.962952] [00000000] *pgd=51e71835, *pte=00000000, *ppte=00000000
[   24.963589] Internal error: : 81b [#1] SMP ARM
[   24.963762] Modules linked in: hello2(+) hello
[   24.964093] CPU: 0 PID: 129 Comm: insmod Not tainted 4.8.0-dirty #1
[   24.964238] Hardware name: Generic DT based system
[   24.964409] task: d1e18540 task.stack: d1e00000
[   24.964879] PC is at lkm_example_init+0x1c/0x24 [hello2]
[   24.965030] LR is at lkm_example_init+0x10/0x24 [hello2]
[   24.965174] pc : [<bf00601c>]    lr : [<bf006010>]    psr: 600b0013
[   24.965174] sp : d1e01e00  ip : 00000000  fp : 00000024
[   24.965448] r10: bf004080  r9 : 2e26661c  r8 : 00000000
[   24.965582] r7 : d1d99a00  r6 : d1e0c9c0  r5 : bf006000  r4 : ffffe000
[   24.965746] r3 : 00000000  r2 : 00000003  r1 : dbbc33dc  r0 : 00000000
[   24.965932] Flags: nZCv  IRQs on  FIQs on  Mode SVC_32  ISA ARM  Segment none
[   24.966111] Control: 10c5387d  Table: 51e3c06a  DAC: 00000051
[   24.966274] Process insmod (pid: 129, stack limit = 0xd1e00220)
[   24.966446] Stack: (0xd1e01e00 to 0xd1e02000)
[   24.966687] 1e00: ffffe000 c0301e9c c0f01310 8040003f c0e67da0 bf0040c8 00000000 c123eac4
[   24.966957] 1e20: c123eadc 8040003e dbe15180 00004ea1 1aab2000 dbe15180 00004ea1 1aab2000
[   24.967219] 1e40: dbe15180 00004ea1 d1d99a00 00000001 bf004080 d1e01f44 bf004080 d1e01f44
[   24.967480] 1e60: d1e0c9c0 d1d99a00 00000001 c03ce548 d1e01f44 d1d99a24 00000001 d1e01f44
[   24.967741] 1e80: d1d99a24 c03b1dc8 bf00408c 00007fff bf004080 c03af4d0 bf004080 bf0040c8
[   24.968001] 1ea0: 00000000 bf00423c d1e01edc e087ed30 bf00408c 00000000 c0c07fb0 c0e6c044
[   24.968263] 1ec0: c0e6bfe0 c0e6bfec d1e817c0 c0403d2c 00400000 024002c2 d1e817c0 00000000
[   24.968525] 1ee0: 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
[   24.968793] 1f00: 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000d80
[   24.969053] 1f20: 00000000 000c0d98 e087ed80 d1e00000 000c0008 00000051 00000000 c03b2258
[   24.969312] 1f40: da827428 e087e000 00000d80 e087e998 e087e884 e087e6e8 00000280 000002c0
[   24.969563] 1f60: 00000000 00000000 00000000 00000420 00000017 00000018 00000010 00000000
[   24.969821] 1f80: 0000000d 00000000 00000d80 bebedf49 00000002 00000080 c0307ec4 d1e00000
[   24.970079] 1fa0: 00000000 c0307d00 00000d80 bebedf49 000c0018 00000d80 000c0008 bebedf49
[   24.970338] 1fc0: 00000d80 bebedf49 00000002 00000080 00000000 00000000 b6fef000 00000000
[   24.970598] 1fe0: bebedca0 bebedc90 000240c8 b6f258b0 600b0010 000c0018 00000000 00000000
[   24.971178] [<bf00601c>] (lkm_example_init [hello2]) from [<c0301e9c>] (do_one_initcall+0x44/0x170)
[   24.971426] [<c0301e9c>] (do_one_initcall) from [<c03ce548>] (do_init_module+0x60/0x1c8)
[   24.971632] [<c03ce548>] (do_init_module) from [<c03b1dc8>] (load_module+0x1c80/0x1fc4)
[   24.971854] [<c03b1dc8>] (load_module) from [<c03b2258>] (SyS_init_module+0x14c/0x15c)
[   24.972061] [<c03b2258>] (SyS_init_module) from [<c0307d00>] (ret_fast_syscall+0x0/0x3c)
[   24.972367] Code: eb4f20a1 e3a03000 e3a02003 e1a00003 (e5832000) 
[   24.972697] ---[ end trace a7ff5cd087940d96 ]---
Segmentation fault


# insmod /lib/hello3.ko 
[   28.180136] Hello, World!
[   28.180311] do_init_module: 'hello3'->init suspiciously returned 1, it should follow 0/-E convention
[   28.180311] do_init_module: loading module anyway...
[   28.180668] CPU: 0 PID: 130 Comm: insmod Tainted: G      D         4.8.0-dirty #1
[   28.180841] Hardware name: Generic DT based system
[   28.181017] [<c0310480>] (unwind_backtrace) from [<c030ba04>] (show_stack+0x10/0x14)
[   28.181208] [<c030ba04>] (show_stack) from [<c0598188>] (dump_stack+0x88/0x9c)
[   28.181407] [<c0598188>] (dump_stack) from [<c03ce574>] (do_init_module+0x8c/0x1c8)
[   28.181578] [<c03ce574>] (do_init_module) from [<c03b1dc8>] (load_module+0x1c80/0x1fc4)
[   28.181759] [<c03b1dc8>] (load_module) from [<c03b2258>] (SyS_init_module+0x14c/0x15c)
[   28.181940] [<c03b2258>] (SyS_init_module) from [<c0307d00>] (ret_fast_syscall+0x0/0x3c)


# insmod /lib/hello4.ko 
[   31.352782] Hello, World!
insmod: can't insert '/lib/hello4.ko': Operation not permitted
