#include <stdio.h>

int main()
{
	unsigned int a=16;
	a|=1<<3;
	printf("%d", a);
}