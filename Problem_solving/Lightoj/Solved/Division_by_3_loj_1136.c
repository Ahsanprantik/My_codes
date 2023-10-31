#include <stdio.h>

int main()
{
	int t, i, a, b;
	scanf("%d", &t);
	int ans[++t];

	for(i=1; i<t; i++)	{
		ans[i]=0;
		scanf("%d %d", &a, &b);
		while(a%3!=1)	{
			a++;
			ans[i]++;
		}
		while(b%3!=1)	{
			b--;
			ans[i]++;
		}
		ans[i]+=2*((b-a)/3);
	}

	for(i=1; i<t; i++)	{
		printf("Case %d: %d\n", i, ans[i]);
	}

	return 0;
}