#include <stdio.h>

int main()
{
	long long int n, i, j, k, s;
	scanf("%d", &n);
	long long int ans[n];
	
	for(i=0; i<n; i++)	{
		scanf("%d", &j);
		s=(j*(j+1))/2;
		for(k=1; k<=j; k<<=1) s-=(2*k);
		ans[i]=s;
	}
	
	for(i=0; i<n; i++)	{
		printf("%d\n", ans[i]);
	}
	return 0;
}