/*	A program to locate a 2d array by linear increment of pointer	*/
#include <stdio.h>
#include <string.h>

int main()
{
	int ara[5][4], i;

	memset(ara, -1, sizeof(ara));

	for(i=0; i<20; ++i)	printf("%p\t%d\n", (int *)ara+i, *((int *)ara+i));

	return 0;
}