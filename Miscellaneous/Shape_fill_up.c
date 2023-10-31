#include <stdio.h>
#include <math.h>
#include <string.h>
#include <mylib.h>

void main()
{
	char shape[]={-2, -33, -34, -35, -36, -37, -78 , -79, -80};
	int i, j, k;
	for(k=0; k<9; k++)	{
		printf("%d\n", shape[k]);
		for(i=0; i<5; i++)	{
			printf("\t\t\t");
			for(j=0; j<15; j++)	{
				printf("%c", shape[k]);
			}
			printf("\n");
		}
		getch();
		printf("\n\n\n");
	}
}
