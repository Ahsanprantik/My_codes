#include <stdio.h>

#define mod 1000000007

long long int pow_mod(long long int num1, long long int num2, long long int base);

int main()
{
	int t, n, b, i, j, num, car, pmod;
	scanf("%d", &t);
	int ans[++t];

	for(j=1; j<t; ++j)	{
		scanf("%d %d", &n, &b);
		for(ans[j]=0, i=n, car=0, pmod=b; ; i--)	{
			if(i > 0)	num = (i/2) + (1 & i) + car;
			else if(car)	num = car;
			else break;	/*	i<=0 && !car	*/
			car = num / b;
			pmod = pow_mod(b, pmod, n-i);
			ans[j] += ((num % b) * pmod) % mod;
		}
	}

	for(j=1; j<t; ++j)	{
		printf("Case %d: %d\n", j, ans[j]);
	}

	return 0;
}

long long int pow_mod(long long int num1, long long int num2, long long int base)
{
	if(!base)	return 1;
	if(base == 1)	return num1;
	else return (num1 * num2) % mod;
}