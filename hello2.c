#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Koval Taras");
MODULE_DESCRIPTION("dereference null pointer");
MODULE_VERSION("0.01");
static int __init lkm_example_init(void) {
 printk(KERN_INFO "Hello, World!\n");
 int *pointer=NULL;
 int data=*pointer;
 *pointer=3;
 return 0;
}
static void __exit lkm_example_exit(void) {
 printk(KERN_INFO "Goodbye, World!\n");
}
module_init(lkm_example_init);
module_exit(lkm_example_exit);
