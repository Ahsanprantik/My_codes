#include <stdio.h>

long long m, n;

long long fn(long long p)
{
	if(p==0) return 1;
	long long ret;
	if(p%2==0)	{
		ret=fn(p/2)%m;
		return (ret*ret)%m;
	}
	else return ((n%m)*fn(p-1))%m;
}
int main()
{
	long long pow;
	char ch, cha;
	scanf("%lld %c %lld %c %lld", &n, &cha, &pow, &ch, &m);
	if(ch!='%' && cha=='^')	return 0;
	printf("Answer: %lld\n", fn(pow));
	return 0;
}