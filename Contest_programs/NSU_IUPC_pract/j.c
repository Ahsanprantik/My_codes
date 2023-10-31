#include <stdio.h>

#define size 1000001
#define mod(x) ((x)%1000000007)

int fact[size];

void factorize(void)
{
	int i, t;
	long long int j;
	
	for(i=2; i<size; i++)	{
		if(!fact[i])	{
			for(j=i; j<size; j *= i)	{
				for(t=j; t<size; t+=j)	{
					fact[t]++;
				}
			}
		}
	}
}

void tcase(int cs)
{
	int n, i, g;
	long long int sum, m;
	sum = m = 1;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)	{
		scanf("%d", &g);
		if(g>0)
			sum += mod(m *= 2*fact[g]);
		else {
			sum += mod(m /= fact[-g]);
		}
		printf("m: %lld\n", m);
	}
	
	printf("Case %d: %lld\n", cs, sum);
}
			
int main(void)
{
	int i, t;
	
	factorize();
	
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)	tcase(i);
	
	return 0;
}