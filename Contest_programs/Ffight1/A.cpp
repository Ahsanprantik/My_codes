#include <bits/stdc++.h>
#define hi 1000


int cmd(int p, int c)
{
	if(p>1000)	p=1000;

	int stk[p], e, j;

	for(int i=1; i<=p; i++)	{
		stk[i-1] = i;
	}

	char cm;
	for(int i=0; i<c; i++)	{
		scanf(" %c", &cm);
		if(cm=='E')	{
			scanf("%d", &e);
			j=p-1;
			if(e<p)	j=e-1;
			while(j--)	stk[j+1]=stk[j];
		}
	}
}

int main()
{
	int p, c, i=1;

	while(scanf("%d %d", &p, &c))	{
		if(!p && !c)	break;
		printf("Case %d:\n", i);
		i++;
		cmd(p, c);
	}
}