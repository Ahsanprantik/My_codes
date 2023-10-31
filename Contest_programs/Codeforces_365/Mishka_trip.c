#include <stdio.h>

int cap_sum(const int ara[], int j, int size)
{
	int i, ret=0;
	for(i=0; i<size; i++)	{
		if(i!=j)	ret+=ara[i]*ara[j];
	}
	return ret;
}

int main()
{
	int n, k, i, ans, j;
	scanf("%d %d", &n, &k);
	int c[n];
	ans=0;
	for(i=0; i<n; i++)	scanf("%d", &c[i]);
	for(i=0; i<k; i++)	{
		scanf("%d", &j);
		ans+=cap_sum(c, j-1, n);
		c[j-1]=0;
	}
	for(i=0; i<n-1; i++)	{
			ans+=c[i]*c[i+1];
	}
	ans+=c[0]*c[n-1];
	printf("%d\n", ans);
	return 0;
}