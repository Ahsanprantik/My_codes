#include <stdio.h>

long long find()
{
	long long y = 696969, g = 21309, p = 999998999999, x;
	for(x=0; ; g=g*g) {
		x++;
		g=g%p;
		if(g==y) return x;
		printf("%lld\n", x);
	}
	return -2;
}

int main()
{
	printf("\n%lld", find());
}
