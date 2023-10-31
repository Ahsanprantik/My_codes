#include <stdio.h>

int main()
{
	int t, n, m, c, w;

	scanf("%d", &t);

	while(t--)	{
		w = 0;
		scanf("%d %d", &n, &m);
		while(n--)	{
			scanf("%d", &c);
			c = c%m;
			if(c)	w += m - c;
		}
		printf("%d\n", w);
	}

	return 0;
}