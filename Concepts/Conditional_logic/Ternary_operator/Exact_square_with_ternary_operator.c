#include <stdio.h>

int isqrd(int x)
{
	int y;
	y=x<0 ?  -(x*x) : x*x;
	return y;
}
int main()
{
	printf("%d\t%d", isqrd(-2), isqrd(2));
	
	return 0;
}