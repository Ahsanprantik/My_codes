#include <stdio.h>

int main(void)
{
	int n, x, i;
	scanf("%d %d", &n, &x);
	int l[n], r[n], cost[n], dur[i];

	for(i=0; i<n; i++)	{
		scanf("%d", &l[i], &r[i], &cost[i]);
		dur[i] = r[i] - l[i] + 1;
	}

	for(i=0; i<n; i++)	{
		for(j=i+1; j<n; j++)	{
			if(dur[i]+dur[j]==x)	{
				if(r[i]<l[j] || r[j]<l[i])	
			}
		}
	}
}