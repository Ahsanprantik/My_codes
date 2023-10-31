#include <stdio.h>
#include <math.h>
#define size 100000000
char ara[size];
void sieve()
{
	int i, j, root;
	root=sqrt(size);
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	for(i=0; i<2; i++)  {
        ara[i]=0;
	}
}
int main()
{
	int n, m, t, i;
	sieve();
    FILE *input;
    input=fopen("Primes_long2.txt", "r");
    fscanf(input, "%d", &t);
	for(i=0; i<t; i++)	{
		fscanf(input, "%d", &n);
		if(n>=size)	{
			printf("Invalid number.\n");
		}
		if(n<size)	{
			if(ara[n]==1)	{
				printf("%d is a prime number.\n", n);
			}
			if(ara[n]==0)	{
				printf("%d is a composit number.\n", n);
			}
		}
	}
}
