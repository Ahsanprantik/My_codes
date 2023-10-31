#include <stdio.h>
#include <math.h>
#include <string.h>

int prime_pow(int n, int p, int mod)
{
	int count = 0, j;
	long long int i, m;

	j = 0;
	for(i=p; i<=n; i*=p, j++)
		count += n/i;
	if(i>mod)	i/=p;

	for(m=i; (count-j)>=0; count-=j)	{
		m %= mod;
		m *= i;
	}

	return count;
}

int sieve_and_calc(int n, int p)
{
	int i, j, total_p, mod;
	int lim = sqrt(n) + 1, lim_d;
	char num[lim];
	long long int ret;

	lim_d = sqrt(lim_d) + 1;
	memset(num, 1, sizeof(num));
	for(i=2; i<=lim_d; i+=2)	{
		if(num[i])	{
			for(j=i+i; j<=lim; j += i)
				num[j] = 0;

			total_p = prime_pow(n, i);
			mod = modulo(i, total_p, n);
		}
		if(i==2)	i--;
	}
}

int main(void)
{
	int t;
	long long int n, p, rem;

	scanf("%d", &t);

	while(t--)	{
		scanf("%lld %lld", &n, &p);

		rem = sieve_and_calc(n, p);
