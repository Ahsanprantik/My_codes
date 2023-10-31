#include <stdio.h>

int main()
{
	int t, i;
	scanf("%d", &t);
	unsigned int ans[++t];

	for(i=1; i<t; ++i)	{
		scanf("%u", &ans[i]);
		ans[i]	/= 2;
	}

	for(i=1; i<t; ++i)	{
		printf("Case %d: %u\n", i, ans[i]);
	}

	return 0;
}