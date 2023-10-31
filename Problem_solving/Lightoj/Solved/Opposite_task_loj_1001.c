#include <stdio.h>

int main()
{
	int i, t, n;
	scanf("%d", &t);
	int ans[t][2];
	for(i=0; i<t; i++)
	{
		ans[i][1]=0;
		scanf("%d", &n);
		if(n>10) {
			ans[i][1]=10;
			n-=10;
		}
		ans[i][0]=n;
	}
	for(i=0; i<t; i++)	{
		printf("%d %d\n", ans[i][0], ans[i][1]);
	}
	return 0;
}