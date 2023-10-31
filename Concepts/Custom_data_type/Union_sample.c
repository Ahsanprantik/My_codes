/*	Creating and using a union	*/
#include <stdio.h>

union u_type	{
	int i;
	char ch;
};

void f1(union u_type *p);

int main(void)
{
	union u_type un;

	un.i = 65;
	printf("%d %c\n", un.i, un.ch);

	f1(&un);
	printf("%d %c\n", un.i, un.ch);

	return 0;
}

void f1(union u_type *p)
{
	p->i = 321;
}