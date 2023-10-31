#include <bits/stdc++.h>

int main()
{
	int b, s, t, min, j=1;

	while(scanf("%d %d", &b, &s))	{
		if(!b && !s)	break;
		min = INT_MAX;
		for(int i=0; i<b; i++)	{
			scanf("%d", &t);
			if(t<min)	min = t;	
		}
		for(int i=0; i<s; i++)	scanf("%d", &t);
		printf("Case %d: ", j);
		if(b-s>0)	printf("%d %d\n", b-s, min);
		else printf("%d\n", 0);
		j++;
	}

	return 0;
}