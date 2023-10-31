/*	A program to illustrate pointer to function	*/
#include <stdio.h>
#include <string.h>

void check(char *a, char *b,
			int (*cmp)(const char *, const char *));

int main()
{
	char s1[80], s2[80];
	int (*p)(const char *, const char *);

	p = strcmp;

	gets(s1);
	gets(s2);

	check(s1, s2, p);	/*	can be declared as
							check(s1, s2, strcmp)	*/

	return 0;
}

void check(char *a, char *b,
			int (*cmp)(const char *, const char *))
{
	printf("Testing for equality.\n");
	if(!(*cmp)(a, b))	printf("Equal\n");	/*	cmp(a, b) is valid
												but (*cmp)(a, b) is used
												to highlight the function
												pointer to avoid bug	*/
	else printf("Not equal\n");
}