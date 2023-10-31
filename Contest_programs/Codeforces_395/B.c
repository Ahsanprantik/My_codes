#include <stdio.h>

int main()
{
	int n, i, ind, indx, mid;
	scanf("%d", &n);
	int a[n];

	if(!(n & 1))	mid = n/2 - 1;
	else mid = -1;

	ind = 1;
	for(i=0; i<n; i++)	{
		if(ind)	{
			indx = n - i - 1;
			if(i !=mid) ind--;
		}
		else {
			indx = i;
			if(i !=mid)	ind++;
		}
		printf("Index: %d\n", indx);
		scanf("%d", &a[indx]);
	}

	for(i=0; i<n-1; ++i)	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[i]);

	return 0;
}