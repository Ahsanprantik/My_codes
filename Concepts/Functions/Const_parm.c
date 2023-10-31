/*	Constanft pointer parameter	*/
#include <stdio.h>

void print_vert(const char *s);

int main(void)
{
	char str[] = "Bangladesh";
	print_vert(str);

	return 0;
}

void print_vert(const char *s)
{
/*	*s = 'V';	/*	won't compile	*/
	while(*s)	printf("%c\n", *s++);
}