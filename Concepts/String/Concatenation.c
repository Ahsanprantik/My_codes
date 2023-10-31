/*	Manipulating strcat, concatinating one string onto the end of another	*/
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[11] = "Bangla";	/*	Declare extra space for a string to be added	*/
	char s2[] = "desh";
	strcat(s1, s2);
	puts(s1);
	return 0;
}
/*	Note: Space of the destination string should be (dest + src + 1), src for source length and 1 for NULL	*/