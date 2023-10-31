#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <stdbool.h>

#define size 1000000000
bool ara[size];

void sieve()
{
	register int i, j, root;
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

int is_prime(int n)
{
	return ara[n];
}

int main()
{
	sieve();
	FILE *output;
	output=fopen("Primes_long.txt", "w");
	int n;
	char h=0;
	for(n=2; n<=size; n++)	{
			if(is_prime(n)==1)	{
				h++;
				fprintf(output, "%10d", n);
				printf("%d\n", n);
				if(h==12)	{
					h=0;
					fprintf(output, "\n");
				}
		}
	}
	printf("Finished. Open the 'Primes.txt' file. Press any key to close......");
	getch();
	return 0;
}
