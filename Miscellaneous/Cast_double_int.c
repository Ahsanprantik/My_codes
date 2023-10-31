#include <stdio.h>

void main()
{
	double dd;
	int ii;
	ii=5;
	dd=(double)ii/2;
	printf("%.1lf\n\n", dd);
	for(ii=0; ii<25; ++ii)
		printf("%d/2 = %.1lf\n", ii, (double)ii/2);
}