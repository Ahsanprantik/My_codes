#include <stdio.h>

void main()
{
	short int a;
	unsigned long b;
	a=-1;
	b=1<<31;
	printf("%u", b+a);
}