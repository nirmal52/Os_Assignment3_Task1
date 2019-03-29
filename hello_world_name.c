#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static char *name;

module_param(name,charp,0000);
MODULE_PARM_DESC(name,"s");

static int hello_name_init(void)
{
printk(KERN_ALERT "Hello, world from: %s\n",name);
return 0;
}
static void hello_name_exit(void)
{
printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_name_init);
module_exit(hello_name_exit);
