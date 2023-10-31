#include <stdio.h>

int main(void)
{
	int n, m, i, j, count, b, w;

	scanf("%d %d", &n, &m);
	int tab[n][m];

	count = 0;
	for(i=0; i<n; i++)	{
		b = 0, w = 0;
		for(j=0; j<m; j++)	{
			scanf("%d", &tab[i][j]);
			if(tab[i][j])	b++;
			else w++;
		}
		count += (w*(w+1) + b*(b+1))/2;
	}

	for(j=0; j<m; j++)	{
		b = 0, w = 0;
		for(i=0; i<n; i++)	{
			if(tab[i][j])	b++;
			else w++;
		}
		count += (w*(w+1) + b*(b+1))/2 - b - w;
	}

	printf("%d\n", count);

	return 0;
}
