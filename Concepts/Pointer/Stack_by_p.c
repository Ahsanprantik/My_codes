/*	a simple stack operated accessed by pointers,
	inputs & outputs in FILO manner, demonstrate
	the pointer comparison and use of two or more
	pointer to the same object	*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int *tos, *p1, stack[SIZE];

void push(int i);
int pop(void);

int main()
{
	int val;

	tos = stack;	/*	tos points to the top of stack	*/
	p1 = stack;	/*	initialize p1	*/

	do {
		printf("Enter number to stack('0' to pop, '-1' to exit): ");
		scanf("%d", &val);
		if(val)	push(val);
		else printf("Value on top is %d\n", pop());
	} while(val!=-1);

	return 0;
}

void push(int i)
{
	p1++;
	if(p1==tos+SIZE)	{
		printf("Stack overflow.\n");
		exit(1);
	}
	*p1 = i;
}

int pop(void)
{
	if(p1==tos)	{
		printf("Stack underflow.\n");
		exit(1);
	}
	p1--;
	return *(p1+1);
}