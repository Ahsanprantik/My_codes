/*	Illustration of a pointer to multiple functions	*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void check(char *a, char *b,
			int (*cmp)(const char *, const char *));
int numcmp(const char *a, const char *b);

int main()
{
	char s1[80], s2[80];

	gets(s1);
	gets(s2);

	check(s1, s2, strcmp);	/*	passing strcmp comparison function	*/
	check(s1, s2, numcmp);	/*	passing numcmp comparison function	*/

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

int numcmp(const char *a, const char *b)
{
	if(atoi(a)==atoi(b))	return 0;
	return 1;
}