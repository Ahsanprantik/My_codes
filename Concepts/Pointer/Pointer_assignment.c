#include <stdio.h>

int main()
{
	int *p1, *p2, x;
	
	x = 2;
	p1 = &x;
	p2 = p1;

	printf(" %p\n", p2);	/* address of x */
	return 0;
}
