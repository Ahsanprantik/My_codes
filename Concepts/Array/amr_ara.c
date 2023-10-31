#include <stdio.h>
#define num 1000000

int main()
{
	int n, i, t, ind, max=0;
	scanf("%d", &n);
	int ara[num], ara1[n];
	for(i=0; i<num; i++)	{
		ara[i]=0;
	}
	for(i=0; i<n; i++)	{
		scanf("%d", &ara1[i]);
		ara[ara1[i]]++;
	}
	for(i=0; i<num; i++)	{
		if(ara[i]>max)	{
			max=ara[i];
			ind=i;
		}
	}
	for(i=0; ara1[i]!=ind; i++)	{}
	for(t=n-1; ara1[t]!=ind; t--)	{}
	printf("%d %d", i+1, t+1);
	return 0;
}
	