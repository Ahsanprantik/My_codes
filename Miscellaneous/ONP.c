#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, len, k, h;
	scanf("%d", &t);
	char expr[t][400], rpn[t][400], operate[200];
	for(i=0; i<t; i++)	{
		scanf("%s", expr[i]);
		len=strlen(expr[i]);
		k=0;
		h=0;
		for(j=0; j<len; j++)	{
			if(expr[i][j]==')' && expr[i][j+1]==')')	{
				for( ; h>0; --h)	{
					rpn[i][k]=operate[k];
				}
			}
			if(expr[i][j]>='a' && expr[i][j]<='z')	{
				rpn[i][k]=expr[i][j];
				k++;
			}
			if(expr[i][j]=='+' || expr[i][j]=='-' || expr[i][j]=='*' || expr[i][j]=='/' || expr[i][j]=='^')	{
				operate[h]=expr[i][j];
				h++;
			}