#include <bits/stdc++.h>

int main()
{
	int n, max;
	scanf("%d", &n);
	int a[n], cm1[n-1], cm2[n-2];

	for(int i=0; i<n; i++)	{
		scanf("%d", &a[i]);
	}

	cm1[0] = abs(a[0]-a[1]);

	for(int i=1, j=-1; i<n-1; i++, j=-j)
		cm1[i] = cm1[i-1] + j*abs(a[i]-a[i+1]);

	cm2[0] = abs(a[1]-a[2]);

	for(int i=1, j=-1; i<n-2; i++, j=-j)
		cm2[i] = cm2[i-1] + j*abs(a[i+1]-a[i+2]);

	max = 0;
	for(int i=n-2; i; i--)	{
		for(int j=i-1; j+1; j--)	{
			if(cm1[i]-cm1[j]>max)	max=cm1[i]-cm1[j];
			if(cm2[i]-cm2[j]>max)	max=cm2[i]-cm2[j];
		}

	}

	for(int j=n-2; j+1; j++)
		if(cm1[n-1]-cm1[j]>max)	max=cm1[n-1]-cm1[j];

	printf("%d\n", max);

	return 0;
}