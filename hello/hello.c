#include <linux/kernel.h>
#include <linux/module.h>
static int __init hello_init(void)
{
	printk(KERN_INFO “Hello, World !!!\n”);
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO “Exiting ...\n”);
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE(“GPL”);
MODULE_AUTHOR(“Tarale”);
MODULE_DESCRIPTION(“Hello world module.”);
MODULE_VERSION(“1.0”);
