#include <stdio.h>

int int_pwr(register int n, register int e)
{
	register void *point;
	printf("%p\n", point);
	register int temp;
	printf("%p\n", point);
	temp=1;
	printf("%p\n", point);
	while(e--)	{
		temp*=n;
		printf("%p\n", point);
	}
	return temp;
}

void main()
{
	int a;
	a=int_pwr(2, 4);
	printf("%d\n", a);
}
