#include <stdio.h>

int main()
{
	unsigned int a=7;
	a&=~(1<<3);
	printf("%d", a);
}