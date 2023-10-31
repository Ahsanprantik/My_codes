#include <stdio.h>

void main()
{
	long a;
	unsigned int b;
	a=(1<<31) | 1;	//100....001 binary
	printf("%d %u\n", a, a);
	b=1<<31;	//100...000 binary
	printf("%u\n", b);
	printf("%u\n", a+b);
}
