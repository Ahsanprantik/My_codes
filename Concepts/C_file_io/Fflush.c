/* This is a program demonstrates
 	the function 'fflush()'.	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[80], *ifflush;
	FILE *fp;

	if(!(fp=fopen("TEST", "w")))	{
		puts("Cannot open file.");
		exit(1);
	}
	
	do {
		puts("Enter a string ('$' to flush):");
		gets(str);
		if((ifflush=strchr(str, '$')))	*ifflush = '\0';
		strcat(str, "\n");	/* add a newline */
		fputs(str, fp);
		if(ifflush)	fflush(fp);
	} while(*str!='\n') ;

	fclose(fp);

	return 0;
}
