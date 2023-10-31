#include <stdio.h>
//Variable sharing the same name is overloaded by the local variable or a formal parameter.
const int n=100;//no change occurred

void f1();
void f2();

void main()
{
	int temp;
	f1(temp);
	printf("main(): %d\n", n);
}

void f1(int n)//variable 'n' overloaded by formal parameter.
{
	n=30;
	f2();
	printf("f1(): %d\n", n);
}

void f2()
{
	int n;//variable 'n' overloaded by local variable.
	n=20;
	printf("f2(): %d\n", n);
}
