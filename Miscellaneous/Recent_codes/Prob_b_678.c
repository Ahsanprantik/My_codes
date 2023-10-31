#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
	int n, m, k, temp, u, v, f, min;
	scanf("%d %d %d", &n, &m, &k);
	int road[m][3];
	char city[n];
	memset(city, 1, sizeof(city));
	min=INT_MAX;
	temp=m;
	while(m)	{
		m--;
		scanf("%d %d %d", &road[m][0], &road[m][1], &road[m][2]);
	}
	m=temp;
	while(k)	{
		k--;
		scanf("%d", &f);
		city[f-1]=0;
	}
	while(m)	{
		m--;
		u=road[m][0]-1;
		v=road[m][1]-1;
		if((city[u]^city[v]) && road[m][2]<min)	{
			min=road[m][2];
		}
	}
	if(min==INT_MAX)	printf("-1\n");
	else printf("%d\n", min);
	return 0;
}
