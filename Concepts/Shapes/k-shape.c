#include <stdio.h>

int main()
{
	int i, j, k=0;
	char str[13][7];
	for(i=0; i<13; i++)	{
		for(j=0; j<7; j++)	{
			str[i][j-k]='c';
			printf("-");
		}
		str[i][j-k]='\0';
		printf("%s\n", str[i]);
		if(i<6)	{
			k++;
		}
		else {
			k--;
		}
	}
}