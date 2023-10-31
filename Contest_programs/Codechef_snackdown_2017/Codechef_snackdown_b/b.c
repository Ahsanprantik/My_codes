#include <stdio.h>

int n, m;

int minh(void)
{
	int i, j;
	int ara[n][m][2];
	int max = 0;
	int h;

	for(i=0; i<n; i++)	{
		for(j=0; j<m; j++)	{
			scanf("%d", &ara[i][j][0]);
			if(ara[i][j][0]>max)	max = ara[i][j][0];
		}
	}

	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(ara[i][j][0] == max)	ara[i][j][1] = 0;

	h = eq(ara, )
}