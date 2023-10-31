#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n, i, j, k, lim;
	scanf("%d", &n);
	char a[n+2];
	lim = sqrt(n+1);
	k = 0;
	memset(a, 0, sizeof(a));
	for(i=2; i<=lim; ++i)	{
		if(!a[i])	{
			if(!k)	k++;
			for(j=i+i; j<=(n+1); j+=i)	a[j]=1;
		}
	}
	printf("%d\n", k+1);
	for(i=2; i<=n; ++i)	{
		printf("%d ", a[i]+1);
	}
	printf("%d\n", a[i]+1);
}