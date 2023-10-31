#include <stdio.h>

int main()
{
	int x, y;

	x=10;

	for(y=10; y!=x; ++y)	printf("%d\n", y);
	printf("%d\n", y);	/* This is the only printf()
						statement that will execute */

	return 0;
}