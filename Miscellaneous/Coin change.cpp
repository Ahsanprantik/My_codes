#include <stdio.h>
#include <string.h>
#include <algorithm>
#define s_things 5
#define s_amount 100

using namespace std;

int ara[s_things];
int dp[s_things][s_amount];
int make, n;

int call(int i, int amount)
{
	if(i==n)	{
		return 0;
	}
	if(amount==make)	{
		return 1;
	}
	if(dp[i][amount]!=-1)	{
		return dp[i][amount];
	}
	int ret1=0, ret2=0, temp=amount+ara[i];
	if(temp<=make)	{
		ret1=max(call(i, temp), call(i+1, temp));
	}
	ret2=call(i+1, amount);
	return dp[i][amount]=max(ret1,  ret2);
}

int main()
{
	int i, siz=sizeof(dp);
	scanf("%d%d", &make, &n);
	for(i=0; i<n; i++)	{
		scanf("%d", ara[i]);
	}
	memset(dp, -1, siz);
	i=call(0, 0);
	printf("%d", i);
	return 0;
}
