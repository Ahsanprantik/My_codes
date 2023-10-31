#include <stdio.h>

int main()
{
	int cand, k, sum, defr, i;
	scanf("%d", &cand);
	for(i=1, sum=0; (sum+i)<=cand; i++)	{
		sum+=i;
	}
	defr=cand-sum;
	k=i-1;
	printf("%d\n", k);
	for(i=1; i<k; i++)	{
		printf("%d ", i);
	}
	printf("%d\n", k+defr);
	return 0;
}