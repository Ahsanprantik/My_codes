#include <stdio.h>

int main()
{
	int n, j, x, y, i, t;
	scanf("%d", &t);

	while(t--)	{
		scanf("%d", &n);
		printf("%d\n", n);	/*	round	*/
		for(i=1; i<=n; i++)	{
			printf("%d\n", n);	/*	k	*/
			for(j=1, x=i, y=i+1; j<=n; j++)	{
				if(x>n)	x = 1;
				if(y>n)	y = 1;
				printf("%d %d %d\n", j, x, y);	/*	letters	*/
				x++;
				y++;
			}
		}
	}

	return 0;
}