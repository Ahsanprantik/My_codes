#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tcase(void)
{
	int n, m, k, i, j, ab, happy, p;
	scanf("%d %d %d", &n, &m, &k);
	int wishes[n][k], obj[m];

	for(i=0; i<n; i++)
		for(j=0; j<k; j++)
			scanf("%d", &wishes[i][j]);

	scanf("%d", &p);

	memset(obj, 0, sizeof(obj));
	while(p--)	{
		scanf("%d", &i);
		obj[i-1] = 1;
	}

	for(i=0; i<n; i++)	{
		happy = 0;
		for(j=0; j<k && !happy; j++)	{
			ab = abs(wishes[i][j]) - 1;
			if(obj[ab] && wishes[i][j]>0)	happy = 1;
			if(!obj[ab] && wishes[i][j]<0)	happy = 1;
		}
		if(!happy)	return 0;
	}

	return 1;
}

int main(void)
{
	int t, i, ret;

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		ret = tcase();
		if(ret)	printf("Case %d: Yes\n", i);
		else printf("Case %d: No\n", i);
	}

	return 0;
}
