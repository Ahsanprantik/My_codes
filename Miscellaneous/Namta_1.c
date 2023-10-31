#include<stdio.h>
int main()
{
	int ara[10][10], i, j;
	for(i=0; i<10; i++)	{
		for(j=0; j<10; j++)	{
			ara[i][j]=(i+1)*(j+1);
		}
	}
	for(i=0; i<10; i++)	{
		printf("%s\n", ara[i]);
	}
}