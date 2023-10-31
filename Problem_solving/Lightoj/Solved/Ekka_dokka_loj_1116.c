#include <stdio.h>

int main()
{
	int t, i, shift;
	unsigned long long m, n, w;
	scanf("%d", &t);
	t++;
	long long ans[2][t];

	for(i=1; i<t; i++)	{
		scanf("%lld", &w);
		for(n=1, shift=0; !(n & w); n<<=1, shift++);
		if(!shift)	m=0;
		else m=w>>shift;
		ans[0][i]=m;
		ans[1][i]=n;
	}

	for(i=1; i<t; i++)	{
		if(ans[0][i])	printf("Case %d: %lld %lld\n", i, ans[0][i], ans[1][i]);
		else printf("Case %d: Impossible\n", i);
	}

	return 0;
}