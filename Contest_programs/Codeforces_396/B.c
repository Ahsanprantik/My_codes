#include <stdio.h>

int main()
{
	int n, i, j, temp;

	scanf("%d", &n);
	int ara[n];

	for(i=0; i<n; ++i)	scanf("%d", &ara[i]);

	for(i=0; i<(n-1); ++i)	{
		j = i;
		temp = ara[j+1];
		while((j+1) && temp<ara[j])	{
			ara[j+1] = ara[j];
			j--;
		}
		ara[j+1] = temp;
	}
	for(i=0; i<(n-2); ++i)	{
		if(ara[i]+ara[i+1]>ara[i+2])	break;
	}
	if(i<(n-2))	printf("YES\n");
	else printf("NO\n");

	return 0;
}