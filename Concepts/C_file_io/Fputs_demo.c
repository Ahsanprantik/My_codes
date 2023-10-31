/* This is a program demonstrates
 	the function 'fputs()'.	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[80];
	FILE *fp;

	if(!(fp=fopen("TEST", "w")))	{
			puts("Cannot open file.");
			exit(1);
	}
	
	do {
		puts("Enter a string (CR to quit):");
		gets(str);
		strcat(str, "\n");	/* add a newline */
		fputs(str, fp);
	} while(*str!='\n') ;

	fclose(fp);

	return 0;
}
