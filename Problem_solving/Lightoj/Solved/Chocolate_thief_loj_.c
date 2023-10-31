#include <stdio.h>

void tcase(int t, int n)
{
	int x, y, z, mx, mn, i;
	
	int v[n];
	char name[n][20];
	
	mx = mn = 0;
	for(i=0; i<n; i++)	{
		scanf(" %s %d %d %d", name[i], &x, &y, &z);
		v[i] = x * y * z;
		if(v[i]>v[mx])	mx = i;
		if(v[i]<v[mn])	mn = i;
	}
	if(mx==mn)	{
		printf("Case %d: no thief\n", t);
	}
	else
	printf("Case %d: %s took chocolate from %s\n", 			t, name[mx], name[mn]);
}

int main(void)
{
	int t, i, n;
	scanf("%d", &t);
	for(i=1; i<=t; i++)	{
		scanf("%d", &n);
		tcase(i, n);
	}
		
	return 0;
}