/*	Imply simple arithmatic operation
	on pointer variable	*/
#include <stdio.h>

int main()
{
	int *p, x;

	x = 10;
	p = &x;

	printf("%p\n", p);
	
	p++;	/*	will add value of the size of integer variable	*/

	printf("%p\n", p);

	p = p + 12;

	printf("%p\n", p);

	return 0;
}