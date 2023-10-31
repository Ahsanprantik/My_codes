#include <stdio.h>

struct employee{
	int id;
	float wage;
	char name[80];
} emp;	//global struct emp

struct employee *p=&emp;	//pointer of the structure


void main()
{

	emp.wage=123.23;
	p->id=1;
	printf("Employee %d: %.2f", emp.id, emp.wage);
}
