#include <bits/stdc++.h>

int main()
{
	int n, r, t, i, j;
	double tmp, c;
	long long int p;

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf("%d %d", &n, &r);
		cin<<p;
		c = 1 + (double)r/100;
		for(tmp=n, j=0; tmp<p; tmp *= c, j++);
		printf("Case %d: %d\n", i, j);
	}

	return 0;
}