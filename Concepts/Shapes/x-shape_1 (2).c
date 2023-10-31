#include <stdio.h>

int main()
{
	FILE *output;
	output=fopen("x.html", "w");
	int h=0, i, j, l, k=0;
	char str[11][12];
	for(i=0; i<11; i++)	{
		for(j=0; j<11; j++)	{
			str[i][j]='x';
		}
			for(l=0; l<k; l++)	{
				str[i][l]=' ';
				str[i][11-l-1]=' ';
			}
			str[i][j]='\n';
			str[i][j+1]='\0';
			fputs(str[i], output);
			puts(str[i]);
			if(i<5)	{
				k++;
			}
			else {
				k--;
			}
	}
	return 0;
}
