/*	increment pointer to a string
	to get forward part of it	*/
#include <stdio.h>

int main()
{
	char *p1, str[] = "Bangladesh";

	p1 = str;
	while(*p1)	{
		printf("%s\n", p1);
		p1++;
	}

	return 0;
}
/*	C pointer is vey powerful.
	It can handle an array quickly and easily.	*/