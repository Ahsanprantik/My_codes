/* This program seeks a specified byte
   and outputs its data. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;

	if(argc!=3)	{
		printf("usage: SEEK filename byte\n");
		exit(1);
	}

	if((fp=fopen(argv[1], "rb"))==NULL)	{
		printf("Cannot open file\n");
		exit(1);
	}

	if(fseek(fp, atol(argv[2]), SEEK_SET))	{
		printf("Seek error.\n");
	}
	ch = getc(fp);
	printf("Byte at %ld is %c.\n", atol(argv[2]), ch);

	return 0;
}
