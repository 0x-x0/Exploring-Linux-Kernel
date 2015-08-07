#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
static char *name = “Tarale”;
static long roll_no = 1234;
static int total_subjects = 5;
static int marks[5] = {80, 75, 83, 95, 87};
module_param(name, charp, 0);
MODULE_PARM_DESC(name, “Name of the a student”);
module_param(roll_no, long, 0);
MODULE_PARM_DESC(rool_no, “Roll number of a student”);
module_param(total_subjects, int, 0);
MODULE_PARM_DESC(total_subjects, “Total number of subjects”);
module_param_array(marks, int, &total_subjects, 0);
MODULE_PARM_DESC(marks, “Subjectwise marks of a student”);
static int __init param_init(void)
{
	static int i;
	printk(KERN_INFO “Name: %s\n”, name);
	printk(KERN_INFO “Roll no: %ld\n”, roll_no);
	printk(KERN_INFO “Subjectwise marks “);
	
	for (i = 0; i < total_subjects; ++i) {
		 printk(KERN_INFO “Subject-%d = %d\n”, i + 1,marks[i]);
	}	
}
return 0;

static void __exit param_exit(void)
{
	/* Don’t do anything */
}
module_init(param_init);
module_exit(param_exit);
MODULE_LICENSE(“GPL”);
MODULE_AUTHOR(“Tarale.”);
MODULE_DESCRIPTION(“Module with command line arguments.”);
MODULE_VERSION(“1.0”);
