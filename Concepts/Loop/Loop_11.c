#include <stdio.h>

int main()
{
	int x;
	float z;

	for(x=100; x!=65; x-=5)	{
		z=x*x;
		printf("The square of %d, is %f\n", x, z);
	}

	return 0;
}