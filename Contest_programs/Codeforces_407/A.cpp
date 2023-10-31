#include <bits/stdc++.h>

int main()
{
	int n, k, w, tm;
	scanf("%d %d", &n, &k);

	tm = 0;
	while(n--)	{
		scanf("%d", &w);
		tm += w/k;
		if(w%k)	tm++;
	}
	if(1 & tm)	tm++;
	
	tm = tm/2;
	
	printf("%d\n", tm);

	return 0;
}
