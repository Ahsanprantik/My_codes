#include <stdio.h>

int main()
{
	int n, m, ans, temp, i, j;
	scanf("%d %d", &n, &m);
	int a[n], sum=0;

	for(i=0; i<n; i++)	{
		scanf("%d", &a[i]);
	}

	for(j=0; sum<m; j++)	{
		for(i=0, temp=0; i<n; i++)	{
			if(a[temp]<a[i])	{
				temp=i;
			}
		}
		sum+=a[temp];
		a[temp]=0;
	}
	printf("%d\n", j);
	return 0;
}