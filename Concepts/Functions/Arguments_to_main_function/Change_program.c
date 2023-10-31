/*	An attempt to change the execution pointer
	of this program to b.out compilation of
	Redirect.c program	*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	strcpy(argv[0], "./b.out");

	printf("Hello world.\n");
	printf("%s\n", argv[0]);

	return 0;
}