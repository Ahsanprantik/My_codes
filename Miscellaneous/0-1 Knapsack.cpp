#include <stdio.h>
#include <string.h>
#include <algorithm>

#define max_n 100
#define max_w 1000

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
	int i;
	freopen("in.txt", "r", stdin);
	scanf("%d%d", &n, &cap);
	memset(dp, -1, sizeof(dp));
	for(i=0; i<n; i++)	{
		scanf("%d%d\n", &weight[i], &cost[i]);
	}
	printf("%d\n", ns(0, 0));
	return 0;
}
