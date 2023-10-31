#include <stdio.h>
#include <math.h>
const int size=1000000000;
char ara[31623];
void print_ara()
{
	int i, root;
	root=sqrt(size);
	for(i=2; i<root; i++)	{
        if(ara[i]==1)
            printf("%d\n", i);
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
	for(n=31624; n<=size; )
}
