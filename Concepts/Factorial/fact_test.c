#include <stdio.h>
#include <math.h>

int main()
{
	int T, N, i, j, n;
	T=100000;
	N=1000000000;
	int Z[T];
	for(i=0; i<T; i++)	{
		n=0;
		if(N>=1 && N<=1000000000)	{
			Z[i]=0;
			for(j=1; n<=N; j++)	{
				n=pow(5, j);
				Z[i]+=N/n;
			}
		N--;
		}
	}
	for(i=0; i<T; i++)	{
		printf("%d\n", Z[i]);
	}
	printf("Finished!");
	return 0;
}