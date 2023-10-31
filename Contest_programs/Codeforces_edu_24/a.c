#include <stdio.h>

int main(void)
{
	long long int n, k, d, c, nw;

	scanf("%I64d %I64d", &n, &k);

	d = (n/2)/(k+1);
	c = d * k;
	nw = n - d - c;
	printf("%I64d %I64d %I64d\n", d, c, nw);

	return 0;
}