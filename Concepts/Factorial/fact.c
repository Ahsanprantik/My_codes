#include<stdio.h>

int main()
{
	long long int f=1, i;
	for(i=1; i<=30; i++)	{
		f=f*i;
		printf("%lld! = %lld\n", i, f);
	}
	return 0;
}