#include <stdio.h>

int main()
{
	int i, j;
	for(i=0; i<4; i++)	{
		if(i==0)	{
			printf("*");
		}
		else {
			for(j=0; j<5; j++)	{
				if(j<=i)	{
					printf(" ");
				}
				else {
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}