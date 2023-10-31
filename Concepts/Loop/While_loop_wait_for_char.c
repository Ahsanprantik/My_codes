#include <stdio.h>

char wait_for_char(void);

int main()
{
	char ch;
	ch = wait_for_char();	/* Should return 'A' */

	printf("You have typed an %c.\n", ch);	

	return 0;
}

char wait_for_char(void)
{
	char ch;

	ch = '\0';	/* Initialize ch */
	while('A' != (ch = getchar())) /*ch = getchar()*/;

	return ch;
}