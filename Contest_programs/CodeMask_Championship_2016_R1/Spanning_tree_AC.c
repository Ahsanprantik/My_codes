#include <stdio.h>

int main()
{
	int t, i, n;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++) {
		scanf("%d", &n);
		ans[i]=2*(n-1);
	}
	for(i=0; i<t; i++) {
		printf("Case %d: %d\n", i+1, ans[i]);
	}
	return 0;
}