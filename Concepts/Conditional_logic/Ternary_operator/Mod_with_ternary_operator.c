#include <stdio.h>

int mod(int x)
{
	int y;
	y=x<0 ?  -x : x;
	return y;
}
int main()
{
	printf("%d\t%d", mod(-2), mod(2));
	
	return 0;
}