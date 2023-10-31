/*	!bug: every integer must be checked against next xor	*/
#include <stdio.h>

int main()
{
	int n, l, r, t, k, q, ans, count;
	scanf("%d", &n);
	int ara[n];
	int xor, que[n];

	for(t=0; t<n; t++)	scanf("%d", &ara[t]);

	xor = ara[0];
	que[0] = k = 0;
	printf("%d ", 0);
	for(t=1; t<n; t++)	{
		if(xor > (ara[t]^ara[t-1]))	k++;
		que[t] = k;
		xor = ara[t]^ara[t-1];
		printf("%d ", que[t]);
	}
	printf("\n");

	scanf("%d", &q);
	ans = 0;
	while(q--)	{
		scanf("%d %d", &l, &r);
		l = (l + ans)%n;
		r = (r + ans)%n;
		for(t=l, k=que[l], ans=0, count=0; t<=r; t++, count++)	{
			if(que[t]!=k)	{
				ans += (count*(count-1))/2;
				if(count==1)	ans++;
				k = que[t];
				count = 0;
			}
		}
		if(que[t]!=k)	ans += (count*(count-1))/2;
		printf("%d %d %d\n", ans, l, r);
	}

	return 0;
}