#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define size 100000000

bool ara[size];

void sieve()
{
	register int i, j, root=sqrt(size);
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	printf("Asigning arrray to 1 complete\n");
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	printf("Sieve complete. Please wait...");
}
int main()
{
	FILE *output;
	output=fopen("Primes.txt", "w");
	register int n;
	sieve();
	for(n=2; n<=size; n++)	{
		if(ara[n]==1)	{
			fprintf(output, "%2d", n);
		}
	}
	printf("\nPrime writing complete. Open 'Primes.txt'");
	return 0;
}