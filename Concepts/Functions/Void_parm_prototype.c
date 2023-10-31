/*	This program has a prototype with empty
	parameter list, that indicates some
	or no parameter is permissible.
	This program won't compile in C++.	*/
#include <stdio.h>

void f();

int main(void)
{
	f(7);
}

void f(int n)
{
	printf("%d\n", n);
}
/*	ideone C: http://ideone.com/FovJOP
	ideone C++: http://ideone.com/rCpul6
*/