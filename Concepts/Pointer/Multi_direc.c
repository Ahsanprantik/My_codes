/*	Multiple indirections	*/
#include <stdio.h>

int main()
{
	int x, *p, **q, **r, ***s;

	x = 10;
	
	p = &x;	/*	Single indirection	*/

	q = &p;	/* Multiple indirection at 2nd degree	*/

/*	r = &(&x);	/*	Directly applied multiple indirection technique
					Compiler error: lvalue required as unary ‘&’ operand	*/

	s = &q;	/*	Multilple indirections at 3rd degree	*/

	printf("**q: %d\n", **q);	/*	Print the value of x	*/
/*	printf("**r: %d\n", **r);	*/
	printf("***s: %d\n", ***s);	/*	Print the value of x	*/

	return 0;
}