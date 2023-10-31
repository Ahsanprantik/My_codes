#include <stdio.h>

int max(int a, int b)
{
	return a>b ? a : (b>a ? b : 0);		//If a=b, 0 is returned.
}

int main()
{
	printf("%d\n", max(10, 9));
	printf("%d\n", max(9, 10));
	/*Both returns 10*/
	printf("%d\n", max(9, 9));
}