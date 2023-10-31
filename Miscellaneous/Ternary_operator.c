#include <stdio.h>

int main()
{
	int a, b;
	a=1<2 ? 100 : 200;	//true case
	b=2<1 ? 100 : 200;	//false case
	printf("%d %d", a, b);
	return 0;
}