/*	This program doesn't use a function parameter
	and doesn't enforce strong type checking.
	This leads the program crash without proper warning.	*/
#include <stdio.h>

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