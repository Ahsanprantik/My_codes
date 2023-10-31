#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <stdbool.h>
#define sizeL 16000000000000000000
#define size 2e9

bool ara[size];

void sieve()
{
	register long long int i, j, root;
	root=sqrt(size);
	printf("Program started.\n");
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	printf("Assigned array to 1\n");
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<=size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	printf("Assigning complete. Sieve finished.\n");
}

bool is_prime(register long long int n, register long long int h)
{
	register int i, j;
	if(n<2)		{
		return 0;
	}
	for(i=2; i<=h; i++)	{
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
	sieve();
	FILE *output;
	output=fopen("Primes_long2.txt", "w");
	register long long int n, h=sqrt(size+1);
	for(n=size+1; n<=sizeL; n++, h++)    {
        if(is_prime(n, h)==1)  {
            fprintf(output, "%10d\n", n);
            printf("%10d\n", n);
        }
	}
	printf("Finished. Open the 'Primes.txt' file. Press any key to close......");
	getch();
	return 0;
}
