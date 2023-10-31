#include <stdio.h>

int main()
{
	int a, b, i, n;
	scanf("%d", &n);
	int ans[n];
	for(i=0; i<n; i++)	{
		scanf("%d %d", &a, &b);
		ans[i]=a*b;
	}
	
	for(i=0; i<n; i++)	{
		printf("%d\n", ans[i]);
	}
	
	return 0;
}