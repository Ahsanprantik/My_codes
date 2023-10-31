#include <stdio.h>
#include <math.h>
const int size=1000;
char ara[1000];
void print_ara()
{
	int i;
	for(i=2; i<size; i++)	{
		printf("%d -- %d\n", ara[i], i);
	}
	printf("-------\n");
}
void sieve()
{
	int i, j, root;
	root=sqrt(size);
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	print_ara();
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	print_ara();
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
	while(1)	{
		printf("Please enter a number (0 to exit): ");
		scanf("%d", &n);
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
