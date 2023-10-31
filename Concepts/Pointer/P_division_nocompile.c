/*	trying out pointer division	*/
#include <stdio.h>

int main()
{
	int *p1, *p2, *p3, x, y;	/*	declarations	*/

	p1 = &x;
	p2 = &y;
	p3 = p1/p2;	/*	assignments	*/

	printf("%p\n", p3);	/*	output	*/

	return 0;
}
/*	Compiler error: invalid operands to binary / */