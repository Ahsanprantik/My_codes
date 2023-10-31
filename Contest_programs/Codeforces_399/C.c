#include <stdio.h>

int main()
{
	int n, k, x, i, j, t, max=0, min=1<<30;
	scanf("%d", &n);

	int a[n];

	for(i=0; i<n; ++i)	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; ++i)	{
		j=i+1;
		t=a[j];
		for(; j && t<a[j]; j--) a[j]=a[j-1];
		a[++j] = t;
	}
	scanf("%d %d", &x, &k);
	for(j=0; j<k; ++k)
		for(i=0; i<n; ++i)
			a[i]^=x;

	for(i=0; i<n; ++i)	{
		if(a[i]>max)	max = a[i];
		if(a[i]<min)	min = a[i];
	}
	printf("%d\n", max);

	return 0;
}