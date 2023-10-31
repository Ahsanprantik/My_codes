#include <stdio.h>
#include <math.h>
#define size 2142514409
#define root 46287
char ara[root+1];
void sieve()
{
	int i, j, rr;
	for(i=2; i<=root; i++)	{
		ara[i]=1;
	}
	rr=sqrt(root);
	for(i=2; i<=rr; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=root; j=j+i)	{
				ara[j]=0;
			}
		}
	}
}
char is_prime(long long int n)
{
	int i, rr, j;
	if(n<2)		{
		return 0;
	}
	rr=sqrt(n);
	for(i=2; i<=rr; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=n; j=j+i)	{
				if(j==n)	{
					return 0;
				}
			}
		}
	}
	return 1;
}
int main()
{
	int n, m;
	sieve();
	while(1)	{
		printf("Please enter a number (0 to exit): ");
		scanf("%d", &n);
		if(n==0)	{
			break;
		}
		if(n>size)	{
			printf("Invalid number.\n");
		}
		if(n<=size)	{
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