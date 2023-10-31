#include <bits/stdc++.h>
#define size 100001

using namespace std;

int main()
{
	int n, a, c, ans, i, mx;
	scanf("%d %d", &n, &a);
	int na[size];

	memset(na, 0, sizeof(na));
	mx = 0;
	while(n--)	{
		scanf("%d", &c);
		na[c]++;
		if(na[c]>na[mx])	mx = c;
	}

	if(na[mx]>na[a])	printf("%d\n", mx);
	else printf("-1\n");
	
	return 0;
}