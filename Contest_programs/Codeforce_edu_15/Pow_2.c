#include <stdio.h>

int pow_check(const long int n)
{
	long int i, ret, lim;
	ret=0;
	lim=1<<31;
	for(i=1; i!=lim; i=i<<1)	{
		if(i&n)	{
			if(i==1)	return 0;
			if(!ret)	ret=1;
			else return 0;
		}
	}
	return ret;
}

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int A[n];
	for(i=0; i<n; i++)	scanf("%d", &A[i]);
	for(i=n-1; i; i--)	{
		for(j=i-1; j>=0; j--)	{
			if(pow_check(A[i]+A[j]))	{
				printf("%d\n", j+1);
				return 0;//force terminate.
			}
		}
	}
}