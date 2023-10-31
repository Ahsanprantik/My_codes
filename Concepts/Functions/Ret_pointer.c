/*	Return pointer of the first occurrence of c in s	*/
#include <stdio.h>

char *match(char c, char *s)	/*	The address s is copied,
									address won't change	*/
{
	while(c!=*s && *s)	s++;
	return(s);
}

int main(void)
{
	char s[80], *p, ch;

	gets(s);
	ch = getchar();
	p = match(ch, s);

	if(*p)	/*	There is a match.	*/
		printf("%s\n", p);
	else
		printf("No match found\n");

	return 0;
}