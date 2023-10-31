/*	A program to illustrate ending with a null pointer	*/
#include <stdio.h>
#include <string.h>

int search(char *p[], char *name)
{
	register int t;

	for(t=0; p[t]; ++t)
		if(!strcmp(p[t], name))	return t;

	return -1;
}

int main()
{
	char *book[] = {
		"Australia",
		"Bangladesh",
		"England",
		"India",
		"New Zealand",
		"Pakistan",
		"South Africa",
		"Srilanka",
		NULL
	};
	char name[] = "Banglades";
	int pos;

	pos = search(book, name) + 1;

	if(!pos)	printf("Not found!\n");
	else printf("%d\n", pos);

	return 0;
}