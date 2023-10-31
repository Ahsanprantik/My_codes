#include <stdio.h>

int main()
{
	int n, a, t, i, m, l, r, hi;

	scanf("%d", &n);
	t = 0;
	while(n--)	{
		scanf("%d", &a);
		t += a;
	}

	scanf("%d", &m);
	hi = 1e9;
	while(m--)	{
		scanf("%d %d", &l, &r);
		if(t<=r && l<=hi)	{
			if(l<=t)	hi = t;
			else hi = l;
		}
	}

	if(hi==1e9)	printf("-1\n");
	else printf("%d\n", hi);

	return 0;
}