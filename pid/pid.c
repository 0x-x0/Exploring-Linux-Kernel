#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/sched.h>

static int __init pid_init(void)
{
	
printk(KERN_INFO “pid = %d\n”, current->pid);
	
	
return 0;
}
static void __exit pid_exit(void)
{
	
/* Don’t do anything */
}
module_init(pid_init);
module_exit(pid_exit);
MODULE_LICENSE(“GPL”);
MODULE_AUTHOR(“Tarale”);
MODULE_DESCRIPTION(“Kernel module to find PID.”);
MODULE_VERSION(“1.0”);
