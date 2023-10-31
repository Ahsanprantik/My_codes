#include <stdio.h>

int main()
{
	int h=0, i, j, l;
	char str[11][11];
	for(i=0; i<11; i++)	{
		for(j=0; j<11; j++)	{
			str[i][j]='c';
		}
		if(i<6)	{
			for(l=0; l<i; l++)	{
				str[i][l]=' ';
				str[i][11-l-1]=' ';
			}
		}
		else {
			for( l=6; l>0; l--)	{
				str[i][l]=' ';
				str[i][11-l-1]=' ';
			}
		}
			str[i][j]='\0';
			printf("%s %d\n", str[i], l);
	}
	return 0;
}