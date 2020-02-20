#include <linux/module.h>
#include <linux/init.h>
#include <linux/moduleparam.h>

int param_var = 0;
module_param(param_var, int, S_IRUSR | S_IWUSR);

void display_param (void)
{
	printk(KERN_ALERT "TEST: param = %d", param_var);
}

static int hello_init (void)
{
	printk(KERN_ALERT "TEST: hello world");
	display_param();
	return 0;
}


static void hello_exit (void)
{
	printk(KERN_ALERT "TEST: exit module");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Brandon Lin");
MODULE_DESCRIPTION("TEST module with parameter");
