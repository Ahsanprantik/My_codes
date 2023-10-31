#include <stdio.h>

struct employee
{
	char name;
	int age;
	float wage;
} emp_gbl;	//Global declaration

int main()
{
	struct employee emp_lcl;	//Local declaration
	printf("Global:\t");
	printf("%p\t", &emp_gbl.name);
	printf("%p\t", &emp_gbl.age);
	printf("%p\t", &emp_gbl.wage);
	printf("%d", sizeof(emp_gbl));
	printf("\nLocal:\t");
	printf("%p\t", &emp_lcl.name);
	printf("%p\t", &emp_lcl.age);
	printf("%p\t", &emp_lcl.wage);
	printf("%d", sizeof(emp_lcl));
	printf("\n");

	return 0;
}