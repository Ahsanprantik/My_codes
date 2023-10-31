/*	Compilation code for important string fuctions in C	*/
#include <stdio.h>
#include <string.h>	/*	Holds all C string functions	*/

int main()
{
	char s1[80], s2[80];

	gets(s1);
	gets(s2);

	printf("Lengths: %d %d\n", strlen(s1), strlen(s2));	/*	Length	*/

	if(!strcmp(s1, s2))	printf("The strings are equal.\n");	/*	Compare	*/

	strcat(s1, s2);
	printf("%s\n", s1);

	strcpy(s1, "This is a test\n");
	printf(s1);

	if(strchr("hello", 'e'))	printf("e is in hello\n");
	if(strstr("hi there", "hi"))	printf("found hi\n");

	return 0;
}