#include <stdio.h>

int main(void)
{
	long long int n, k;

	scanf("%lld %lld", &n, &k);

	if((n/k) & 1)	printf("YES\n");
	else printf("NO\n");

	return 0;
}