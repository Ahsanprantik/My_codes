#include <stdio.h>

int main()
{
	int x, x1, x2, y, y1, y2, i, t, m;
	scanf("%d", &t);
	t++;
	char ans[t][101];
	for(i=1; i<t; i++) {
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &m);
		ans[i][0]=++m;
		while(--m) {
			scanf("%d %d", &x, &y);
			if(x>x1 && y>y1 && x<x2 && y<y2) ans[i][m]=1;
			else ans[i][m]=0;
		}
	}
	for(i=1; i<t; i++) {
		printf("Case %d:\n", i);
		m=ans[i][0];
		while(--m) {
			if(ans[i][m]) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}
/*
1
1 2 8 10
7
0 0
5 6
1 0
7 9
3 5
10 10
1 11
*/