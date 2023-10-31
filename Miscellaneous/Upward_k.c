#include <stdio.h>

int main()
{
	int h=0, i, j, l, k=0;
	char str[10][20];
	for(i=0; i<10; i++)	{
		k++;
		for(j=0; j<19; j++)	{
			str[i][j]=' ';
		}
			for(l=0; l<k; l++)	{
				str[i][l]='c';
				str[i][19-l-1]='c';
			}
			str[i][j]='\n';
			str[i][j+1]='\0';
			printf("%s", str[i]);
	}
	return 0;
}