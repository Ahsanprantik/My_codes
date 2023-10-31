/*	Unfinished	*/
#include <stdio.h>
#include <string.h>

#define rel_pof(x)	(x-ara[x]*2)

void modSieve(int ara[], int N);
int ispermute(int x, int y);

int main(void)
{
	int N, n, min_n;
	double min;
	scanf("%d", &N);
	int ara[N];

	modSieve(ara, N);

	n = N;

	min = N + 10;
	while(n--)	{
		if(ispermute(n, ara[n]) && (double)n/rel_pof(n)<min)	{
			min = ratio(n);
			min_n = n;
		}
	}

	printf(
