#include <stdio.h>

int main(void)
{
	long long int m, b, x, y, max, tree;

	scanf("%lld %lld", &m, &b);

	max = 0;
	for(x=b*m; x>=0; x--)	{
		y = b - x/m;
		if(x%m) y--;
		tree = ((y+1)*x*(x+1))/2 + ((x+1)*y*(y+1))/2;
		if(tree>max)	max = tree;
	}
	printf("%lld\n", max);

	return 0;
}