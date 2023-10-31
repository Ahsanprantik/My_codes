#include <stdio.h>
#include <math.h>

int main()
{
	int n, f;
	scanf("%d", &n);
	int z[25], i, k=1, j, prime[25];
	prime[0]=2;
	for(i=3; i<=n; i++)	{
		for(j=0; prime[j]<=sqrt(i); j++)	{
			if(i%prime[j]==0)	{
				break;
			}
		}
		if(prime[j]>sqrt(i))	{
			prime[k]=i;
			printf("%d\n", prime[k]);
			k++;
		}
	}
	for(i=0; i<k; i++)	{
		for(j=1; pow(prime[i], j)<=n; j++)	{
			f=pow(prime[i], j);
			z[i]+=n/f;
		}
		printf("%d -- %d times\n", prime[i], z[i]);
	}
	return 0;
}