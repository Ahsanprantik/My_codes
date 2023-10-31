/*	This program is wrong.	*/

#include <stdio.h>

int main()
{
	char a[80], b[40];
	char *p1, *p2;

	p1 = a;
	p2 = b;
	
	/*	Pointers to different objects
	shlould not be compared like this.	*/
	if(p1<p2)	printf("String 'a' preceeds.\n");
	else printf("String 'b' preceeds.\n");

	return 0;
}