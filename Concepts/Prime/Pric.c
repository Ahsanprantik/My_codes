#include <stdio.h>
#include <math.h>

int main()
{
	long long int num=1, i, ac, num1, k=pow(2, 31);
	ac=1234567890 % (int) (k);
	num1=0;
	for(i=1; i<=33333333; i++)	{
		printf("%lld\n", 1+num1);
		num1+=ac;
		if(1+num1>=k)	{
			num1=num1-ac;
		}
	}
	return 0;
}