/*	An array of structure	*/
#include <stdio.h>

int main(void)
{
	struct	{
		int a;
		int b;
	} x[100];

	x[2].b = 10;

	printf("%d\n", x[2].b);

	return 0;
}