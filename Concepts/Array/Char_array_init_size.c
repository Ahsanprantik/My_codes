/*	Examine size if character array is initialized without size	*/
#include <stdio.h>

int main()
{
	char str[]	= "string";	/*	Initialized without size	*/

	printf("%d\n", sizeof(str));	/*	Examines array size in bytes	*/

	return 0;
}
/*	The size is  (initial_string_length + 1)	*/