#include <stdio.h>
#include <math.h>
const int size=2147483647;
char ara[46340];
void print_ara()
{
	int i, root;
	root=sqrt(size);
	for(i=2; i<root; i++)	{
		printf("%d -- %d\n", ara[i], i);
	}
	printf("-------\n");
}
void sieve()
{
	int i, j, root, rr;
	root=sqrt(size);
	for(i=2; i<=root; i++)	{
		ara[i]=1;
	}
	print_ara();
	rr=sqrt(root);
	for(i=2; i<=rr; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=root; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	print_ara();
}
int is_prime(int n)
{
	int i, root, j;
	if(n<2)		{
		return 0;
	}
	root=sqrt(n);
	for(i=2; i<=root; i++)	{
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