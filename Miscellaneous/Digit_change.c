#include <stdio.h>

int main()
{
	int i, j, t, n;
	scanf("%d", &t);
	char num[t][8];
	for(i=0; i<t; i++)	{
	scanf("%s", num[i]);
		for(j=0; num[i][j]!='\0'; j++)	{
			n=(int)(num[i][j]-'0') % 2;
			if(n==0)	(int)num[i][j]++;
			else (int)num[i][j]--;
		}
	}
	for(i=0; i<t; i++)	{
		printf("%s\n", num[i][j]);
	}
	return 0;
}