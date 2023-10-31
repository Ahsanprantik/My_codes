#include <stdio.h>

int main()
{
	int t, i, n, max, temp, j;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++) {
		scanf("%d", &n);
		max=0;
		for(j=0; j<n; j++) {
			scanf("%d", &temp);
			if(temp>max)
				max=temp;
			else if(-temp>max)
				max=-temp;
		}
		ans[i]=max;
	}
	for(i=0; i<t; i++) {
		printf("Case %d: %d\n", i+1, ans[i]);
	}
	return 0;
}