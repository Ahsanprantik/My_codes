#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
	int n, max=0, i, j;
	scanf("%d", &n);
	int ara[n];
	for(i=0; i<n; i++)	{
		scanf("%d", &ara[i]);
		if(ara[i]>max)	max=ara[i];
	}
	max=sqrt(max)+1;
	int div[max+1];
	for(i=0; i<max; i++)	div[i]=1;
	for(i=0; i<max; i+=2)	div[i]=0;
	for(i=0; i<max; i+=3)	div[i]=0;
	for(i=5; i<max; i++)	{
		if(div[i]==1)	{
			j=n;
			while(j==n)	{	
			for(j=0; j<n; j++)	{
				if(ara[j]%div[i]!=0)	break;
			}
			}
			if(j<n && j>0)	{
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}