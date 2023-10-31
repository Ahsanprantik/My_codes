#include <stdio.h>

int main()
{
	int n, i, min=1<<30, max=0, count=0;
	scanf("%d", &n);
	int num[n];

	for(i=0; i<n; ++i)	{
		scanf("%d", &num[i]);
		if(num[i]>max)	max = num[i];
		if(num[i]<min)	min = num[i];
	}
	for(i=0; i<n; ++i)	{
		if(min<num[i] && num[i]<max)	count++;
	}
	printf("%d\n", count);

	return 0;
}