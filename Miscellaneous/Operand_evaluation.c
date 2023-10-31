#include <stdio.h>
/*
This code compiler dependent.
If first operand is evaluated, ouput is a=23, b=46.
If second one is evaluated, output is a=46, b=23.
*/
int global=0;

int f1()
{
	return global;
}

int f2()
{
	global=23;
	return global;
}

void main()
{
	int a, b;

	a=f1()+f2();	
	global=0;
	b=f2()+f1();
	printf("a=%d\nb=%d", a, b);	//If f1() evaluated, then 23. Else 46.
}
