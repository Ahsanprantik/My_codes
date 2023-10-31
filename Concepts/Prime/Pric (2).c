#include <stdio.h>
#include <math.h>
#include <stdbool.h>
long long size=2147483647;
bool ara[2147483647];

void sieve()
{
	 int i, j, root=sqrt(size);
	for(i=2; i<size; i++)	{
		ara[i]=1;
	}
	printf("Asigning arrray to 1 complete\n");
	for(i=2; i<=root; i++)	{
		if(ara[i]==1)	{
			for(j=i+i; j<size; j=j+i)	{
				ara[j]=0;
			}
		}
	}
	printf("Sieve complete. Please wait...");
}
int main()
{
	sieve();
	size++;
	long long int i=1;
	for(int j=0; j<=50; j++)	{
		i+=1234567890;
		if(i>=size)	{
			i-=size;
		}
		if(i!=2147483647)	{
		printf("%d", ara[i]);
		}
		if(i==2147483647)	{
			printf("0");
		}
	}
	return 0;
}