#include <stdio.h>
#include "Showbin_sth.c"

void Tester()
{
	int p[10], ret;

	while(1)	{
		printf("\nInput: ");
		scanf("%d %d", &p[0], &p[1]);
		printf("\nOutput: ");

		ret=showbin_sth(p[0], p[1]);

		printf("\nReturned: %d\n", ret);
		getch();
	}
}

void main()
{
	Tester();
}
