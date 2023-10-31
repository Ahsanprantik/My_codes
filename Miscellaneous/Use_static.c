#include <stdio.h>
#include <math.h>
#include <mylib.h>

void f1()
{
	static int x;
	printf("%d\n", x);
	x++;
}

void main()
{
	int i;
	static int x=5;//static but located in different functions
	for(i=0; i<10; i++)	{
		f1();
	}
	printf("\nIn function main: %d\n", x);
	return;
}
