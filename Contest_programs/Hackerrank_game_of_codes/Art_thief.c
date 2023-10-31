#include <stdio.h>
#define mod 1000000007

long long int modulo(long long int n)
{
	long long int a, m;

	m = (1<<30) % mod;
	a = 1;

	while((n-=30)>=0)	{a = (a * m) % mod;printf("\nhere.. %lld\n", n);}

	n += 30;
	a = (a * (1<<n)) % mod;

	return a;
}

int main()
{
	int t, i;
	scanf("%d", &t);
	long long int ans[t];
	long long int n;

	for(i=0; i<t; i++)	{
		scanf("%lld", &n);
		ans[i] = (modulo(n/2) * (2+(1&n)) - 1) % mod;
	}

	for(i=0; i<t; i++)	printf("%lld\n", ans[i]);

	return 0;
}