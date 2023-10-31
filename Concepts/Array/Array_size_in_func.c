/*	declaring array size in a function parameter;
	declaring lower and higher sized array and see its effect */
#include <stdio.h>

void func1(int ara[10]);	/*	with size, lower */
void func2(int ara[100]);	/*	with size, higher */

int main()
{
	int x[50];

	func1(x);
	printf("\n");
	printf("\n");
	func2(x);
	printf("\n");

	return 0;
}

void func1(int ara[10])
{
	int i;

	for(i=0; i<50; i++)	ara[i] = i;
}

void func2(int ara[100])
{
	int i;

	for(i=0; i<50; i++)	printf("%d\t", ara[i]);
}
/*	Note: When array is declared with size in a function parameter,
	it does not actually create a sized array. It only declares an
	pointer of the type. */