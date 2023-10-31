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
}
int is_prime(int n)
{
	if(n<2)		{
		return 0;
	}
	return ara[n];
}
int main()
{
	int n, m;
	sieve();
    FILE *input;
    input=fopen("Primes_long2.txt", "r");
	while(1)	{
		printf("Please enter a number (0 to exit): ");
		fscanf(input, "%d", &n);
		if(n==0)	{
			break;
		}
		if(n>=size)	{
			printf("Invalid number.\n");
		}
		if(n<size)	{
			m=is_prime(n);
			if(m==1)	{
				printf("It is a prime number.\n");
			}
			if(m==0)	{
				printf("It is a composit number.\n");
			}
		}
	}
}
