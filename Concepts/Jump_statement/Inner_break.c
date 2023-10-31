#include <stdio.h>

int main()
{
	int i, j;

	for(i=1; i<=3; i++)	{
		for(j = 1; ; j++)	{
			printf("%d ", j * i);
			if(5 == j)	break;
		}
		printf("\n");	/* This line executes,
						since break can't break outer loop */
	}

	return 0;
}