#include <stdio.h>
#include <string.h>

void pad(char *s, int length);

int main()
{
	char str[80];

	strcpy(str, "this is a test.");
	pad(str, 40);
	printf("The length of the padded string is %d\n", strlen(str));	/* will be 40 always */

	return 0;
}

/* Add spaces to the end of a string. */
void pad(char *s, int length)
{
	int l;

	l = strlen(s); /* find out how long it is */

	while(l<length)	{
		s[l] = ' ';	/* insert a space */
		l++;
	}
	s[l]='\0';	/* string must be
				   terminated in a null */
}