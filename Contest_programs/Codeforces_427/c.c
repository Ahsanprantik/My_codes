#include <stdio.h>

int main(void)
{
	int n, q, c, i, x1, y1, x2, y2, t, cnt;
	scanf("%d %d %d", &n, &q, &c);
	int x[n], y[n], s[n];

	for(i=0; i<n; i++)
		scanf("%d %d %d", &x[i], &y[i], &s[i]);

	while(q--)	{
		cnt = 0;
		scanf("%d %d %d %d %d", &t, &x1, &y1, &x2, &y2);
		if(t>=c)	printf("0\n");
		else {
			for(i=0; i<n; i++)	{
				if(s[i]+t<=c)
					if(x1<=x[i] && x[i]<=x2)
						if(y1<=y[i] && y[i]<=y2)	cnt += s[i]+t;
			}
			printf("%d\n", cnt);
		}
	}

	return 0;
}