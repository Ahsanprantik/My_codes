/*	A simple function	*/
#include <stdio.h>

/*	Return 1 if c is part of string s; 0 otherwise.	*/
int is_in(char *s, char c)
{
	while(*s)
		if(*s==c)	return 1;
		else s++;

	return 0;
}

int main()
{
	if(is_in("Bangladesh", 'g'))	printf("IN\n");
	else printf("NOT IN\n");

	return 0;
}