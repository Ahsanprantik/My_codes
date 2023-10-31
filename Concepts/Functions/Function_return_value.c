#include <stdio.h>

int mul(int x, int y);

int main()
{
	int x, y, z;

	x = 10;	y = 20;

	z = mul(x, y);
	printf("%d\n", mul(x, y));
	mul(x, y);

	return 0;
}

int mul(int x, int y)
{
	return x*y;
}