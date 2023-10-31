/*	This program substitutes spaces for tabs
	in a text and supplies error checking	*/
#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 8
#define IN 0
#define OUT 1

void err(int e);

int main(int argc, int *argv[])
{
	FILE *in, *out;
	int tab, i, marker;
	char ch;

	if(argc!=3)	{
		printf("usage: detab <in> <out>\n");
		exit(1);
	}

	if((in = fopen(argv[1], "rb"))==NULL)	{
		printf("Cannot open %s.\n", argv[1]);
		exit(1);
	}

	if((out = fopen(argv[2], "wb"))==NULL)	{
		printf("Cannot open %s.\n", argv[2]);
		exit(1);
	}

	tab = 0;
	marker = NULL;
	do {
		ch = getc(in);
		if(ferror(in))	err(IN);

		/* if tab found, output appropriate number of spaces */
		if(ch=='\t')	{
			if(marker==NULL) marker = ftell(in);
			for(i=tab; i<TAB_SIZE; i++)	{
				putc(' ', out);
				if(ferror(out))	err(OUT);
			}
			tab = 0;
		}
		else {
			putc(ch, out);
			if(ferror(out))	err(OUT);
			tab++;
			if(tab==TAB_SIZE) tab = 0;
			if(ch=='\n' || ch=='\r') tab = 0;
		}
	} while(!feof(in));
	fseek(in, marker, SEEK_SET);
	putchar(getc(in));
	printf("The first tab is in %ld th byte.\n", marker);
	fclose(in);
	fclose(out);

	return 0;
}

void err(int e)
{
	if(e==IN) printf("Error on input.\n");
	else printf("Error on output.\n");
	exit(1);
}