/*	put scharacters till the end of string	*/
#include <stdio.h>

void putstr(char *s)
{
	while(*s)	putchar(*s++);
}

int main()
{
	putstr("Bangladesh\n");
	return 0;
}
/*	warning: deprecated conversion from string constant to ‘char*	*/