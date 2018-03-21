#include <linux/slab.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
/*Written by Kevin Koscica for CSIT 345 Project 1.

/* This function is called when the module is loaded. */
struct birthday{
int math;
int day;
int year;
struct list_head list;
}

static LIST_HEAD(birthday_list);
int simple_init(void)
{
	struct birthday*person_one;
	struct birthday*ptr;

       printk(KERN_INFO "Loading Module\n");
	person_one=kmalloc(size_t c*person_one, GFP_kernel);
	
	person_one->month=8;
	person_one->day=13;
	person_one->year=1995;
	in_LIST_HEAD(person_one->list;
	list_add_tail(person_one->list,& birthday_list);

	person_one->month=8;
	person_one->day=13;
	person_one->year=1995;
	in_LIST_HEAD(person_one->list;
	list_add_tail(person_one->list,& birthday_list);

	person_one->month=8;
	person_one->day=13;
	person_one->year=1995;
	in_LIST_HEAD(person_one->list;
	list_add_tail(person_one->list,& birthday_list);

	person_one->month=8;
	person_one->day=13;
	person_one->year=1995;
	in_LIST_HEAD(person_one->list;
	list_add_tail(person_one->list,& birthday_list);

	person_one->month=8;
	person_one->day=13;
	person_one->year=1995;
	in_LIST_HEAD(person_one->list;
	list_add_tail(person_one->list,& birthday_list);

	list_for_each_entry(ptr, & birthday_list, list){
	printk(KERN-INFO "Birthday= Month%d Day%d Year%d /n", ptr->month,
	ptr->day, ptr->year)
}
       return 0;
}

/* This function is called when the module is removed. */
void simple_exit(void) {
	struct birthday*ptr, *next
	printk(KERN_INFO "Removing Module\n");
	list_for_each_entry_safe=(ptr,next, & birthday_list, list){
	printk(KERN_INFO "Removing %d %d %d \n", ptr->month, ptr->day, ptr->year);
	list_del(& ptr->list);
	kfree(ptr);
}
}

/* Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

