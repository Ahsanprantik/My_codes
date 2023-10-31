/* Different expression statements */
#include <stdio.h>

int func(void);

int main()
{
	int a = 0, b = 1, c =2;	/* variable declaration */
	func();	/* a function call */
	a = b + c; /* an assignment statement */
	b + func();	/* a valid, but strange statement */
	;	/* an empty statement */
	/* all are compilable */

	return 0;
}

int func(void)
{
	return 1;
}