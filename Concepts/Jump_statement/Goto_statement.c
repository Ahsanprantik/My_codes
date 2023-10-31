#include <stdio.h>

int main()
{
	int i, j;

	i = 0;
	/* This portion works just like loops do */
	loop1:
		printf("\n");
		
		if(3 == i)	goto terminate;	/* Just like 'break' in a loop */
		
		i++;
		
		for(j = 1; ; j++)	{
			printf("%d X %d\t= %d\n", i, j, i * j);

			if(10 == j)	goto loop1;
		}

	terminate:

	return 0;
}