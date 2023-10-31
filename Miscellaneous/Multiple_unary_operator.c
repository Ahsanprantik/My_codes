#include <stdio.h>

void main()
{
	int a, b;

	a=4;
	b=*&a;
	printf("%d", b);
}
