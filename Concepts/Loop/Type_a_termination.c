#include <stdio.h>

int main()
{
	char ch;

	for( ; ; )	{
		ch = getchar();	/* get a character */
		if('A'==ch) break;	/* exit the loop */
	}

	printf("Broke the build! You have typed an A.\n");

	return 0;
}