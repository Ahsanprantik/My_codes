/*	Compares two strings and returns:
	0 for mathing
	<0 for first one less than second one
	>0 for first one greater than second one	*/

#include <stdio.h>
#include <string.h>

int main()
{
	int match, less, great;
	char s1[11], s2[11];

	strcpy(s1, "Bangladesh");
	strcpy(s2, "Bangladesh");
	match =	strcmp(s1, s2);
	puts(s1);
	puts(s2);
	printf("Returned %d\n\n", match);

	strcpy(s2, "Pakistan");
	less = strcmp(s1, s2);
	puts(s1);	/* "Bangladesh remained."	*/
	puts(s2);
	printf("Returned %d\n", less);

	strcpy(s2, s1);	/*	Copying "Bangladesh" over "Pakistan"	*/
	strcpy(s1, "India");
	great =	strcmp(s1, s2);
	puts(s1);
	puts(s2);
	printf("Returned %d\n\n", great);

	return 0;
}