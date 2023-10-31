/*	simple demonstration of
	array of pointers	*/
#include <stdio.h>

int main()
{
	int *p[10], v;

	v = 10;
	p[2] = &v;

	printf("%d\n", *p[2]);

	return 0;
}
/*	will output 10	*/