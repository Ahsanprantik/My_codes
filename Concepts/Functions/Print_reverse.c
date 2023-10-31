#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pr_reverse(char *s);

int main()
{
	char s[80];

	gets(s);
	pr_reverse(s);

	return 0;
}

void pr_reverse(char *s)
{
	register int t;

	for(t=strlen(s)-1; t>=0; t--)	putchar(s[t]);

	printf("\n");
}