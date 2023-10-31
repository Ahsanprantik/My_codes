#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define size 1073741824
bool ara[size];

void sieve()
{
	int i, j, root;
	root=sqrt(size);
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
}

int main()
{
	FILE *output;
	output=fopen("Primes_1.txt", "w");
	sieve();
	int n;
	for(n=2; n<=size; n++)	{
			if(ara[n]==1)	{
				fprintf(output, "%d\n", n);
		}
	}
	printf("Finished. Open the 'Primes_1.txt' file. Press any key to close......");
	getch();
	return 0;
}
