/*	A simple text editor to demonstrate
	array of strings	*/
#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main(void)
{
	register int t, i, j;

	printf("Enter an empty line to quit.\n");

	for(t=0; t<MAX; ++t)	{
		printf("%d: ", t+1);
		gets(text[t]);
		if(!*text[t])	break;	/*	quit on blank	*/
	}

	for(i=0; i<t; ++i)	{
		for(j=0; text[i][j]; j++)	putchar(text[i][j]);
		putchar('\n');
	}

	return 0;
}