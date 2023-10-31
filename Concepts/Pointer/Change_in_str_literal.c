#include <stdio.h>
#include <string.h>

char *p = "hello world";

int main()
{
	int i;

	p[0] = 'H';

	/*	print the string forward and backward	*/
	printf(p);
	printf("\n");
	for(i=strlen(p)-1; i+1; i--)	printf("%c", p[i]);
	printf("\n");

	return 0;
}
/*	Segmentation fault (core dumped)	*/