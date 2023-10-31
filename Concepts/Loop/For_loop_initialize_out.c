#include <stdio.h>
#include <string.h>

int main()
{
	char s[10];
	int x;
	gets(s);
	if(*s)	x=strlen(s);
	else x=10;

	for( ; x<10; x++)	printf("%d\n", x);

	return 0;
}