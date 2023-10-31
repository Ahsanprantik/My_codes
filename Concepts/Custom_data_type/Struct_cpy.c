/*	Copying structure	*/
#include <stdio.h>

int main(void)
{
	struct	{
		int a, 	b;
	} x, y;

	x.b = 10;
	y = x;	/*	assign one structure to another	*/

	printf("%d\n", y.b);

	return 0;
}