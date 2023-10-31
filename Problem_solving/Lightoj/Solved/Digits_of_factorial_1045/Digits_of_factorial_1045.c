#include <stdio.h>
#include <math.h>

double log_sum[1000001];

double logsum(int i)
{
	if(i)	return log_sum[i]=logsum(i-1)+log(i);
	return log_sum[0] = 0;
}

int main()
{
	int i, t, n, b;
	scanf("%d", &t);
	int ans[t];

	logsum(1000000);

	for(i=0; i<t; i++)	{
		scanf("%d %d", &n, &b);
		ans[i]=log_sum[n]/log(b)+1;
	}

	for(i=0; i<t; i++)	{
		printf("Case %d: %d\n", i+1, ans[i]);
	}

	return 0;
}
