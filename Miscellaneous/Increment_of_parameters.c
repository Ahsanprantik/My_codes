#include <stdio.h>

void fn(int a, int b, int c)
{
	printf("%d %d %d\n", a, b, c);
}

void main()
{
	int a=1;
	printf("Pre-increment\t: ");
	fn(a++, a++, a++);
	a=0;
	printf("Post-increment\t: ");
	fn(++a, ++a, ++a);
}