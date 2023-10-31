/*	A simpler version of standard library
	gets() function	*/
#include <stdio.h>

char *xgets(char *s);

int main()
{
	char string[80];

	xgets(string);
	printf("The string is now: %s\n", string);

	return 0;
}

char *xgets(char *s)
{
	char ch, *p;
	int t;

	p = s;	/*	gets() also returns a pointer to s	*/

	for(t=0; t<80; ++t)	{
		ch = getchar();

		switch(ch)	{
			case '\n':
				s[t] = '\0';	/*	terminating the string	*/
				return p;
			case '\b':
				if(t>0)	t--;
				break;
			default:
				s[t] = ch;
		}
	}
	s[79] = '\0';

	return p;
}