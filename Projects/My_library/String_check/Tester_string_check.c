#include <stdio.h>
#include "String_check.c"

void Tester()
{
	int ret;

	char s[100], c;

	while(1)	{

		scanf("%s %c", s, &c);

		ret=string_check(s, c);

		printf("\n%d\n", ret);

	}
}

void main()
{
	Tester();
}
