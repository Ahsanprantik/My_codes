#include <stdio.h>

int main(void)
{
	int t, i;
	long long int n, m;
	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf("%lld %lld", &n, &m);
		n = (n/2)*m;
		printf("Case %d: %lld\n", i, n);
	}

	return 0;
}
