#include <stdio.h>

int main()
{
	FILE *output;
	output=fopen("Reverse_k_shape.txt", "w");
	
	int h=0, i, j, l, k=0;
	char str[13][8];
	for(i=0; i<13; i++)	{
		for(j=0; j<7; j++)	{
			str[i][j]='c';
		}
			for(l=0; l<k; l++)	{
				str[i][l]=' ';
			}
			str[i][j]='\n';
			str[i][j+1]='\0';
			fputs(str[i], output);
			if(i<6)	{
				k++;
			}
			else {
				k--;
			}
	}
	return 0;
}