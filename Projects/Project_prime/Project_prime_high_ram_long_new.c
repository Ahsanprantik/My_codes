#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <stdbool.h>
#define size 2147483646//constant
bool ara[size];

void sieve(long long int upper, long long int lower)
{
    FILE *input;
    input=fopen("Primes_1.txt", "r");
	long long int i;
	register long long int j, root;
	root=sqrt(upper);
	printf("Program started.\n");
	for(i=0; i<size; i++)	{
		ara[i]=1;
	}
	printf("Assigned array to 1\n");
	while(i<root)	{
        fscanf(input, "%lld", &i);
        for(j=i+i; j<lower; j=j+i)	{}
        for( ; j<=upper; j=j+i) {
            ara[j-lower]=0;
            printf("%d--%d", j, j-lower);
        }
    }
	printf("Assigning complete. Sieve finished.\n");
}

int main()
{
    long long int lower=pow(2, 31);
    long long int upper=(lower)+(size);
	sieve(upper, lower);
	FILE *output;
	output=fopen("Primes1.txt", "w");
	register long long int n;
	for(n=size+1; n<=upper; n++)    {
        if(ara[n-size]==1)  {
            fprintf(output, "%d\n", n);
            printf("%d\n", n);
        }
	}
	printf("Finished. Open the 'Primes.txt' file. Press any key to close......");
	getch();
	return 0;
}
