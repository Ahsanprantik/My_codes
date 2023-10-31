#include <stdio.h>
#include <string.h>

int main()
{
	int n, l, i, t;
	scanf("%d %d", &n, &l);
	char a[n], b[n];

	for(i=0; i<n; ++i)	scanf("%d", &a[i]);

	for(i=0; i<n; ++i)	scanf("%d", &b[i]);

	for(i=0; i<l; ++i)	{
		for(t=0; t<n; ++t)	b[t]++;

		if(b[t-1] == l)	{
			for(t=n-2; t>=0; t--)	b[t+1] = b[t];
			
			b[0] = 0;
		}

		for(t=0; t<n && a[t] == b[t]; ++t) ;

		if(t==n)	break;
	}

	if(t==n)	printf("YES\n");
	else printf("NO\n");

	return 0;
}