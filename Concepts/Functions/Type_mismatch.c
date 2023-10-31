/*	This program uses a function parameter
	to enforce strong type checking.	*/
#include <stdio.h>

void sqr_it(int *i);

int main(void)
{
	int x;

	x = 10;
	sqr_it(x);	/*	type mismatch	*/

	printf("%d\n", x);

	return 0;
}

void sqr_it(int *i)
{
	*i = *i * *i;
}