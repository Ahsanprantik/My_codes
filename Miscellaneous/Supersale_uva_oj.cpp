#include <stdio.h>
#include <string.h>
#include <algorithm>

#define max_n 1000
#define max_w 31

int n, cap;
int dp[max_n][max_w];
int cost[max_n];
int weight[max_n];

int ns(int i, int w)
{
	if(i==n)	{
		return 0;
	}
	if(dp[i][w]!=-1)	{
		return dp[i][w];
	}
	int profit1=0, profit2=0;
	int wt=w+weight[i];
	if(wt<=cap)	{
		profit1=cost[i]+ns(i+1, wt);
	}
	else {
		profit1=0;
	}
	profit2=ns(i+1, w);
	dp[i][w]=std::max(profit1, profit2);
	return dp[i][w];
}

int main()
{
	int i, j, t, g, siz=sizeof(dp);
	scanf("%d", &t);
	int ans[t];
	for(j=0; j<t; j++)	{
		scanf("%d", &n);
		for(i=0; i<n; i++)	{
			scanf("%d%d", &cost[i], &weight[i]);
		}
		scanf("%d", &g);
		ans[j]=0;
		for(i=0; i<g; i++)	{
			scanf("%d", &cap);
			memset(dp, -1, siz);
			ans[j]+=ns(0, 0);
		}
	}
	for(j=0; j<t; j++)	{
		printf("%d\n", ans[j]);
	}
	return 0;
}
