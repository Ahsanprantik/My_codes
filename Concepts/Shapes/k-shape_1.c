#include <stdio.h>

int main()
{
	FILE *output;
	output=fopen("K.txt", "w");
	int i, j, k=0;
	char str[13][8];
	for(i=0; i<13; i++)	{
		for(j=0; j<7; j++)	{
			str[i][j-k]='c';
		}
		str[i][j-k]='\n';
		str[i][j-k+1]='\0';
		fputs(str[i], output);
		if(i<6)	{
			k++;
		}
		else {
			k--;
		}
	}
}