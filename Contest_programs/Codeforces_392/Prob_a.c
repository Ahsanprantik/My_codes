#include <stdio.h>

int main()
{
	int n, i, max=0, give=0;
	scanf("%d", &n);
	int a[n];

	for(i = 0; i < n; i++)	{
		scanf("%d", &a[i]);
		if(max < a[i])	max = a[i];
	}

	for(i = 0; i < n; ++i)	{
		give += (max - a[i]);
	}
	printf("%d\n", give);

	return 0;
}