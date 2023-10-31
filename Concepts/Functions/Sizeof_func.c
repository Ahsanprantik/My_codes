/*	This program is wrong	*/
#include <stdio.h>

int func(int a, char c);

int main(void)
{
	register int i;
	int (*p2f)(int, char);

	p2f = func;
	printf("%d\n", sizeof(p2f));
/*	func(2, 'D');
	for(i=0; i<3; i++, p2f++)	*p2f = 0;
	/*	can't use as right operand	*//*

	func(2, 'D');	*/

	return 0;
}

int func(int a, char c)
{
	printf("%d %c\n", a, c);

	return 1;
}