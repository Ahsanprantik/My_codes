#include <stdio.h>

int main(void)
{
	int n, p, q, t, i, mx, T, j;
	scanf("%d", &T);


	for(j=1; j<=T; j++)	{
		scanf("%d %d %d", &n, &p, &q);

		mx = 0;
		for(i=0; i<n; i++)	{
			scanf("%d", &t);
			q -= t;
			if((i==p || q<0) && !mx)	break;
		}
		mx = i;
		i++;
		for( ; i<n; i++)	scanf("%d", &t);

		printf("Case %d: %d\n", j, mx);
	}

	return 0;
}