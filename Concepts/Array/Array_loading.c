/*	loads array with value */
#include <stdio.h>

int main()
{
	int x[100];
	int t;
	/*	load x with values 0 through 99 */
	for(t=0; t<100; ++t)	x[t]=t;
	/*	display the contents of x */
	for(t=0; t<100; ++t)	printf("%d ", x[t]);

	printf("\n");

	return 0;
}