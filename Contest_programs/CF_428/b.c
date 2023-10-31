#include <stdio.h>

int main(void)
{
	long int n, k, a, s;
	scanf("%ld %ld", &n, &k);

	s = 0;
	n *= 8;
	while(k--)	{
		scanf("%ld", &a);
		if(s <= n)	s += a + (1&a);
	}

	if(s <= n)	printf("YES\n");
	else printf("NO\n");

	return 0;
}