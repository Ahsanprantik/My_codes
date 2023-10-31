#include <stdio.h>
#include <math.h>

int main()
{
	double f;
	int x, lim;
	scanf("%d", &lim);
	for(x=1, f=0; x<=lim; x++)	{
		f+=log10(x);
		printf("log(%d) = %lf\t Sum = %lf\n", x, log10(x), f);
	}

	return 0;
}
