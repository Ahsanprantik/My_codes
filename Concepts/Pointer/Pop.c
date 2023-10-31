/*	Pointer of pointer	*/
#include <stdio.h>

int main()
{
	int *p, *pop[1], v;
	p = &v;
	pop[0] = &p;

	printf("%p\n", pop[0]);

	return 0;
}
/*	warning: assignment from incompatible pointer type	*/