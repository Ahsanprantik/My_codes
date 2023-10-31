#include <stdio.h>

void num_change(int *p)
{
	*p=23;	//!changed here *_*
	return;
}

void main()
{
	int a=2;
	num_change(&a);
	printf("%d", a);
}
	