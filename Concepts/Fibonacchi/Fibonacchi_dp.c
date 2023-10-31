#include <stdio.h>
#define lim 50

int ara[lim];

int fibonacci(int n)
{
	if(n==0 || n==1)	{
		return 1;
	}
	if(ara[n]!=0)	{
		return ara[n];
	}
	else if(ara[n]==0)	{
		ara[n]=fibonacci(n-1)+fibonacci(n-2);
	}
	return ara[n];
}

int main()
{
	int i;
	for(i=0; i<lim; i++)	{
		ara[i]=0;
	}
	printf("Enter a number: ");
	scanf("%d", &i);
	i=fibonacci(i);
	printf("Fibonacchi: %d", i);
	return 0;
}
