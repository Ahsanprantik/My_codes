#include <stdio.h>
#include <math.h>

int main()
{
	long long int i, ac, num1, k=pow(2, 31), l=1000, u=0;
	ac=1234567890%k;
	num1=1;
	for(i=1; i<10; i++)	{
		printf("%lld\n", num1);
		num1+=ac;
		if(num1>=k)	{
			num1-=ac;
		}
		if(num1<l)	{
			l=num1;
		}
		if(num1>u)	{
			u=num1;
		}
	}
	printf("\n\n lower=%lld\n upper=%lld\n kkkkk=%lld\n ac=%lld", l, u, k, ac);
	return 0;
}