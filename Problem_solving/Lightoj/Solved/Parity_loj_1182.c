#include <stdio.h>

int main()
{
	int t, i, n, par, j, c;
	scanf("%d", &t);
	char ans[++t];

	for(i=1; i<t; i++)	{
		scanf("%d", &n);
		for(j=1, c=31, par=0; c; j<<=1, c--)	{
			if(j & n) par++;
		}
		ans[i]=par & 1;
	}

	for(i=1; i<t; i++)	{
		printf("Case %d: ", i);
		if(ans[i]) printf("odd\n");
		else printf("even\n");
	}

	return 0;
}