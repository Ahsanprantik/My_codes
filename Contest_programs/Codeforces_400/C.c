#include <stdio.h>
#include <string.h>

int door()
{
	int n, m, i, j, k, tm;
	scanf("%d %d", &n, &m);
	int r[++n], dr[2][++n];

	memset(dr, 0, sizeof dr);

	for(i=1; i<n; ++i)	scanf("%d", &r[i]);
	for(i=1; i<=m; ++i)	{
		scanf("%d", &k);
		for(j=0; j<k; ++j)	{
			scanf("%d", &tm);
			if(dr[0][tm])	dr[1][tm]=m;
			else dr[0][tm]=m;
		}
	}

	for(i=1; i<n; ++i)
		if(!r[i])	break;
	if(i==n)	return 1;
	tm = dr[0][i];
	m = dr[1][i];
	for( ; i<n; ++i)
		if(!r[i] && (m != dr[0][i] || m != dr[1][i]))	break;
	if(i==n)	return 1;
	for( ; i<n; ++i)
		if(!r[i] && (tm != dr[0][i] || tm != dr[1][i]))	return 0;

	return 1;
}

int main()
{
	if(door())	printf("YES\n");
	else printf("NO\n");
}