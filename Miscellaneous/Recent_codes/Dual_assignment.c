#include <stdio.h>

int main()
{
	int a, b;
	a = b = 5;	/* The value of the expression 'b=5' is '5'
				   i.e., the right hand operand. */ 
	printf("%d %d\n", a, b);	/* Both are 5. */

	return 0;
}