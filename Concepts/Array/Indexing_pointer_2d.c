#include <stdio.h>

int main()
{
	int a[5][10], *p;

	p = a;
	*((int *)p + 12) = 100;	/*	(p + 1*10 + 2) indexes [1][2]	*/
	printf("%d\n", a[1][2]);

	return 0;
}
/*	g++: error: cannot convert ‘int [5][10]’ to ‘int*’ in assignment
	make: warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]	*/