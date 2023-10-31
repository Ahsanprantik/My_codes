#include <stdio.h>

int min(int i, int j)
{
	if(i<j)	return i;
	return j;
}

int mod(int i)
{
	if(i<0)	return -i;
	return i;
}

int main()
{
	int r1, c1, r2, c2, t, i, distr, distc;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++)	{
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		distr=mod(r1-r2);
		distc=mod(c1-c2);
		ans[i]=min(distr, distc)+mod(distr-distc);
	}
	for(i=0; i<t; i++)	{
		printf("Case %d: %d\n", i+1, ans[i]);
	}
	return 0;
}