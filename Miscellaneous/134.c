#include <stdio.h>

int dp[106][106];

int fn(int h, int w)
{
	if(h<0 || w<0)	return 0;
	if(dp[h][w]==-2)	return 0;
	if(dp[h][w]!=-1)	return dp[h][w];
	if(h==0 && w==0)	return 1;
	dp[h][w]=fn(h-1, w)+fn(h, w-1);
	return dp[h][w];
}

int main()
{
	int h, w, n, i, j;
	scanf("%d %d %d", &h, &w, &n);
	for(i=0; i<h; i++)	{
		for(j=0; j<w; j++)	{
			dp[i][j]=-1;
		}
	}
	for( ; n>0; n--)	{
		scanf("%d %d", &i, &j);
		dp[i-1][j-1]=-2;
	}
	i=fn(h, w);
	printf("%d", i);
	return 0;
}
	