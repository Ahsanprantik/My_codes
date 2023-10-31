#include <bits/stdc++.h>
#define stoi(ch) (ch-'0')
int main()
{
	char n[100001];
	int m=0, i, t, car=-1, flag=1;

	scanf("%s", n);

	for(i=0; n[i]; i++)	{
		m+=stoi(n[i]);
		if(n[i]=='0')	flag=0;
	}

	if(m && m<3)	{
		if(flag==0)	printf("0");
		else printf("-1");
		return 0;
	}
	i--;
	m = m % 3;

	if(!m)	printf("%s", n);
	
	else {
	for( ; i+1; i--)	{
		t=stoi(n[i])%3;
		if(t==m)	break;
		if(t)	{
			if(car!=-1)	break;
			else car=i;
		}
	}
	
	n[i]='x';
	if(car!=-1)	n[car]='x';

	for(i=0; n[i]=='x' || n[i]=='0'; i++);
	for( ; n[i]; i++)
		if(n[i]!='x')	printf("%c", n[i]);
	}

	return 0;
}

	
