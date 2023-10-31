#include <stdio.h>

int x, y;

void f1()
{
	x++;
	y++;
	printf("Link-2: %d %d ", x, y);
	getch();
	return;
}
