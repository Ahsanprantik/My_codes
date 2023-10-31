#include <stdio.h>
#include <string.h>
#include <algorithm>
#define s_coins 5
#define s_amount 7490

int ara[]={1, 5, 10, 25, 50};
int dp[s_coins][s_amount];

int call(int i, int amount)
{
	if(i==s_coins || amount<0)	{
		printf("returned 0: %d %d\n", i, amount);
		return 0;
	}
	if(amount==0)	{
		printf("returned 1: %d %d\n", i, amount);
		return 1;
	}
	if(dp[i][amount]!=-1)	{
		printf("returned %d: %d %d -- dp\n", dp[i][amount], i, amount);
		return dp[i][amount];
	}
	int ret1=0, ret2=0, temp=amount-ara[i];
	if(temp>=0)	{
		ret1=call(i, temp);
	}
	ret2=call(i+1, amount);
	printf("returned %d: %d %d == %d + %d\n", ret1+ret2, i, amount, ret1, ret2);
	return dp[i][amount]=ret1+ret2;
}

int main()
{
	int make, size=sizeof(dp);
	memset(dp, -1, size);
	scanf("%d", &make);
	printf("%d", call(0, make));
	return 0;
}
