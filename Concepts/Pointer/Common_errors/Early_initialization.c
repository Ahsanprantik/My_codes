/*	This program has a bug.	
#include <stdio.h>
#include <string.h>

int main()
{
	char *p;
	char s[80];

	p = s;
	do {
		gets(s);

		/*	Print the decimal equivalent
			of each character	
		while(*p)	printf("%d\n", *p++);
	} while(strcmp(s, "done"));

	return 0;
}
*/
/*	This program is now correct.	*/
#include <stdio.h>
#include <string.h>

int main()
{
	char *p;
	char s[80];

	do {
		p = s;
		gets(s);

		/*	Print the decimal equivalent
			of each character	*/
		while(*p)	printf("%d\n", *p++);
	} while(strcmp(s, "done"));

	return 0;
}