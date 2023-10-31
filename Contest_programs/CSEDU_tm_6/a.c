#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, i, n;
	unsigned int k;
	scanf("%d", &N);
	int ans[N];

	for(i=0; i<N; i++)	{
		scanf("%u", &k);
		n = (int)sqrt(2*k);
		if((n*(n+1))/2+n==k) ans[i] = 1;
		else ans[i] = 0;
	}

	for(i=0; i<(N-1); i++)
		printf("%d ", ans[i]);
	
	printf("%d\n", ans[i]);

	return 0;
}