#include <stdio.h>

int main()
{
	int i, n, m, ind, options;
	scanf("%d %d", &n, &m);
	int a[m];
	for(i=0; i<m; i++)	{
		a[i]=0;
	}
	for(i=0; i<n; i++)	{
		scanf("%d", &ind);
		a[ind-1]++;
	}
	for(i=0, options=0; i<m; i++)	{
		options+=a[i]*(n-=a[i]);
	}
	printf("%d\n", options);
	return 0;
}