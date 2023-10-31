#include <stdio.h>

void main()
{
	int x, y;
	x=(y=3, y+1);
	printf("%d\n", x);
}
