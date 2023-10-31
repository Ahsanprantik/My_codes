#include <stdio.h>
#define calc(a, b, c)	(plus(a, b, c, 0) + plus(a, b, c, 1) + plus(a, b, c, 2) + plus(a, b, c, 3) + plus(a, b, c, 4))
#define plus(a, b, c, x)	(p[b][x]-p[a][x])*(p[c][x]-p[a][x])

int main(void)
{
	int n, i, g, j, k;
	scanf("%d", &n);
	int p[n][5], gd[n];

	for(i=0; i<n; i++)
		scanf("%d %d %d %d %d", &p[i][0], &p[i][1], &p[i][2], &p[i][3], &p[i][4]);

	g = 0;
	for(i=0; i<n; i++)	{
		for(j=i+1; j<n; j++)	{
			for(k=j+1; k<n; j++)
				if(calc(i, j, k)<=0)	break;
			if(k!=n)	break;
		}
		if(j==n)	gd[g++] = i;
	}

	g--;

	printf("%d\n", g);

	for(i=0; i<g; i++)	printf("%d\n", gd[i]);

	return 0;
}
