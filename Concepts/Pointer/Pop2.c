/*	Pointer of pointer	*/
#include <stdio.h>

int main()
{
	int *p, **pop, v;
	p = &v;
	pop = &p;

	printf("%p\n", pop);

	return 0;
}