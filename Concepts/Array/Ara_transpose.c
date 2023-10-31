#include<stdio.h>
int main()
{
	int ara[5][5]={{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}}, ara1[5][5];
	int i, j;
	printf("Content of the main array:\n");
	for(i=0; i<5; i++)	{
		for(j=0; j<5; j++)	{
			printf("%d  ", ara[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<5; i++)	{
		for(j=0; j<5; j++)	{
			ara1[i][j]=ara[j][i];
		}
	}
	printf("Content of the transposed array:\n");
	for(i=0; i<5; i++)	{
		for(j=0; j<5; j++)	{
			printf("%d  ", ara1[i][j]);
		}
		printf("\n");
	}
}
