#include <stdio.h>

int main()
{
	FILE *in;
	in=fopen("code.c", "w");
	char a[10];
	gets(a);
	fputs(a, in);
	fclose(in);
	return 0;
}