#include <stdio.h>

int main()
{
	int t, i;
	scanf("%d", &t);
	long long int n, ans[t];

	for(i=0; i<t; i++)	{
		scanf("%lld", &n);
		ans[i] = n*(n-1)/2 + n/2 - 1;
	}

	for(i=0; i<t; i++)	printf("%lld\n", ans[i]);

	return 0;
}