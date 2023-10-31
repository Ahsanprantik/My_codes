#include <bits/stdc++.h>

int cm_ratio(void)
{
	int b, q, l, m, n, ;
	
	scanf("%d %d %d %d", &b, &q, &l, &m);

	int ara[m];
	n=m;

	while(n--)	scanf("%d", &ara[n]);
	
	srt(ara);

	if(abs(b)==1 || abs(q)==1)	{
		for(int i=0; i<m; i++)
			if(ara[i] == b*q)	return 0;
		return -1;
	}

	if(!(b*q))	{
		if(!ara[0])	return 0;
		else return -1;
	}

	for( ; abs(b)<=l; b*=q)	{
		for(int i=0; i<m; i++)
			if(ara[i]==b)	break;
		
