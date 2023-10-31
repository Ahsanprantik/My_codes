#include <stdio.h>

int sqr(int x);

int main()
{
	int t=10;

	printf("%p\n", &t);
	printf("%d %d\n", sqr(t), t);

	return 0;
}

int sqr(int x)
{
	x = x*x;
	printf("%p\n", &x);
	return(x);
}