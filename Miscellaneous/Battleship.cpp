#include <stdio.h>
#include <string.h>

int ara[211];
int a;

int fn(int i, int miss, int ships)
{
	if(i!=0)	{
		if(miss!=0)	{
			ara[i-1]=-1;
			fn(i-1, miss-1, ships);
		}
		if(ships!=0)
			fn(i-a, miss, ships-1);
	}
	return 0;
}
	
int main()
{
	int n, k, miss, m, j, ans, shot, indicator=0;
	scanf("%d %d %d", &n, &k, &a);
	for(j=0; j<n; j++)	{
		ara[j]=1;
	}
	miss=n-k*a;
	fn(n, miss, k);
	scanf("%d", &m);
	for(j=0; j<m; j++)	{
		scanf("%d", &shot);
		if(ara[shot]==1 && indicator==0)	{
			ans=j;
			indicator=1;
		}
	}
	if(indicator==0) ans=-1;
	printf("%d\n", ans);
	return 0;
}