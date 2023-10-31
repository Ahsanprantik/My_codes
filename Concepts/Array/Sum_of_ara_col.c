#include<stdio.h>
int main()
{
	int ara[5][5]={{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};
	int i, j, sum;
	for(i=0; i<5; i++)	{
		sum=0;
		for(j=0; j<5; j++)	{
			sum=sum+ara[j][i];
		}
		printf("Sum of %dth column is %d.\n", i+1, sum);
	}
}