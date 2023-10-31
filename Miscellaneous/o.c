#include <stdio.h>

int main()
{
	int i, j, k=5;
	char str[13][12];
	for(i=0; i<13; i++)	{
		for(j=0; j<12; j++)	{
			str[i][j]=' ';
		}
		str[i][k]='o';
		str[i][12-k]='o';
		str[i][j]='\0';
		printf("%s %d\n", str[i], i);
		if(k>0)	{
			k--;
		}
		else {
			k++;
		}
	}
}
		