#include <stdio.h>
#include "Link2.c"

extern int x, y;//variable to be linked. Not essential.
extern void f1();

void main()
{
	x=65;
	y=4;
	f1();
	printf("\nLink-1: %d %d ", x, y);
	getch();
	return;
}
