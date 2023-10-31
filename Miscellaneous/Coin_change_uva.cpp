#include <stdio.h>
#include <string.h>
#include <algorithm>
#define s_coins 5
#define s_amount 7490

int ara[]={1, 5, 10, 25, 50};
int dp[s_coins][s_amount];
int make;

int call(int i, int amount)
{
	if(i==s_coins)	{
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
		ret1=call(i, temp);
	}
	ret2=call(i+1, amount);
	return dp[i][amount]=ret1+ret2;
}

int main()
{
	int siz=sizeof(dp);
	memset(dp, -1, siz);
	scanf("%d", &make);
	printf("%d\n", call(0, 0));
	return 0;
}
