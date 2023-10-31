#include <stdio.h>
#include "Showbin.c"

void Tester()
{
	int p[10];
	while(1)	{
		getchar();
		printf("\nInput: ");
		scanf("%d %d", &p[0], &p[1]);
		printf("Output: ");
		showbin(p[0], p[1]);
	}
}

void main()
{
	Tester();
}