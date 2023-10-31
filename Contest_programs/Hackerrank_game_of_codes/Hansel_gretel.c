#include <stdio.h>
#include <math.h>
#define len 1000003

int num[len];

void sieve(void)
{
	int sq = sqrt(len), i, j, count=0;

	num[1] = 1;

	for(i=2; i<=sq; i++)	{
		if(!num[i])	{
			for(j=i+i; j<len; j+=i)	num[j] = 1;
		}
	}
	for(i=3; i<len; i++)	{
		if(!num[i])	count++;
		num[i] = count;
	}
	num[1] = 0;
}

int main()
{
	int a, b, t, i;
	scanf("%d", &t);
	int ans[t];
	sieve();

	for(i=0; i<t; i++)	{
		scanf("%d %d", &a, &b);
		ans[i] = (a<=2) ? num[b] : 0;
	}

	for(i=0; i<t; i++)	printf("%d\n", ans[i]);

	return 0;
}