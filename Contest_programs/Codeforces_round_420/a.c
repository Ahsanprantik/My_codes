#include <stdio.h>

int main(void)
{
	int n, i, j, s, t, is;
	scanf("%d", &n);
	int ara[n][n];

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &ara[i][j]);

	for(i=0; i<n; i++)	{
		for(j=0; j<n; j++)	{
			if(ara[i][j]>1)	{
				is = 0;
				for(t=0; t<n; t++)	{
					if(ara[t][j]<ara[i][j])	{
						for(s=0; s<n; s++)	{
							if(ara[t][j]+ara[i][s]==ara[i][j])	{
								is = 1;
								break;
							}
						}
					}
					if(is)	break;
				}
				if(!is)	{
					printf("No\n");
					return 0;
				}
			}
		}
	}
	printf("Yes\n");

	return 0;
}