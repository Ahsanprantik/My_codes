#include <stdio.h>
#include <ctype.h>

void print_upper(const char *string);

int main()
{
	char s[80];

	gets(s);
	print_upper(s);
	printf("\ns is unchanged: %s\n", s);

	return 0;
}

void print_upper(const char *string)
{
	register int t;

	for(t=0; string[t]; t++)
		putchar(toupper(string[t]));
}