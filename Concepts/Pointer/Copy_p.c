/*	Copy location	*/
#include <stdio.h>

int main()
{
	int x, *p1, *p2;
	x = 10;
	p1 = &x;
	p2 = p1;

	printf("%p: %d\n", p2, *p2);

	return 0;
}