#include <stdio.h>
#include <string.h>

int ifmatch(const char *gl, const char *s, const char *q);

int main(void)
{
	char gl[27], s[100010], q[100010];
	int nq;
	scanf("%s %s %d", gl, s, &nq);

	while(nq--)	{
		scanf(" %s", q);
		if(ifmatch(gl, s, q))	printf("YES\n");	/*	return 1;	*/
		else printf("NO\n");
	}

	return 0;
}


int ifmatch(const char *gl, const char *s, const char *q)
{
	int i, wibad;

	for(wibad=i=0; s[i]; i++, wibad++)	{
		if(s[i]!='?' && s[i]!='*' && !strchr(gl, s[i]))	return 0;
		if(s[i]!=q[wibad])	{
			if(s[i]=='?')	{
				if(!strchr(gl, q[wibad]))	return 0;
			}
			else if(s[i]=='*')	{
				for( ; q[wibad] && !strchr(gl, q[wibad]); wibad++);
				wibad--;
			}
			else return 0;
		}
	}
	if(q[wibad])	return 0;
	return 1;
}
/*
ab
a?a
2
aaa
aab

abc
a?a?a*
4
abacaba
abaca
apapa
aaaaax
*/