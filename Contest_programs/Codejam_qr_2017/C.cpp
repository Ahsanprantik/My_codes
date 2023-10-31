#include <stdio.h>

int main()
{
	long long int n, k, h, mn, mx;
	int t, j;
	unsigned long long int i;
	scanf("%d", &t);

	for(j=1; j<=t; j++)	{
	scanf("%lld %lld", &n, &k);

	for(i=1<<63; !(i&k); i>>=1);

	h = (n-i)/i;

	mn = h/2;
	mx = h/2 + h%2;

	printf("Case #%d: %lld %lld\n", j, mx, mn);
	}
	return 0;
}