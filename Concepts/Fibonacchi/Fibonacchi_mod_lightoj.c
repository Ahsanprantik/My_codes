#include <stdio.h>
#include <math.h>

long long int ara[100000];

long long int fib(long long int n)
{
	if(n==0 || n==1)	{
		return 1;
	}
	if(ara[n]!=0)	{
		return ara[n];
	}
	if(ara[n]==0)	{
		ara[n]=fib(n-1)+fib(n-2);
	}
	return ara[n];
}

int main()
{
	long long int n;
	scanf("%lld", &n);
	fib(n);
	long long int mod=pow(10, 9)+7;
	printf("%lld\n", (long long int)ara[n-1]%mod);
	return 0;
}
