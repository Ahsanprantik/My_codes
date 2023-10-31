#include <stdio.h>

int main()
{
	int n=5, a;
	a=---n;		//!Compiling error: lvalue required as decrement operand.
	printf("%d\n", n);
	return 0;
}