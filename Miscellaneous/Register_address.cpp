#include <stdio.h>

int main()
{
	register int reg;
	register int reg2;
	register int *point;

	point=&reg;
	printf("%p\n", point);
	point=&reg2;
	printf("%p\n", point);

	return 0;
}
