#include <stdio.h>
#include <math.h>
#include <string.h>

const int size=1000000000;
char ara[31623];

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
}
char is_prime(int n)
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
	FILE *output;
	output=fopen("Primes.txt", "w");
	int n, i;
	char m, h=0;
	sieve();
	for(n=1; n<=size; n++)	{
		if(n<100)	{
			m=ara[n];
		}
		else {
			m=is_prime(n);
	}
			if(m==1)	{
				h++;
				fprintf(output, "%d\t", n);
				if(h==4)	{
					h=0;
					fprintf(output, "\n");
				}
		}
	}
}