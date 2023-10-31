#include <stdio.h>
#include <string.h>

int dp[2][10000001], ara[10000001], n, k;

int fn(int i, int am)
{
	if(i==n) return 0;
	am=am%k;
	if(dp[i][am]!=-1) return dp[i][am];
	int take1=0, take2=0, notake=0;
	if(am==0) take1=1;
	take2=fn(i+1, am+ara[i]);
	notake=fn(i+1, ara[i]);
	return dp[i][am]=take1+take2+notake;
}

int main()
{
	int i, t, j;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++)	{
		memset(dp, -1, sizeof(dp));
		scanf("%d", &n);
		for(j=0; j<n; j++)	{
			scanf("%d", &ara[j]);
		}
		scanf("%d", &k);
		ans[i]=fn(0, ara[0]);
	}
	for(i=0; i<t; i++)	{
		printf("%d\n", ans[i]);
	}
	return 0;
}