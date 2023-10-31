/*	One string is fully copied to the first element of another string array .	*/
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[10], src[] = "Bangladesh";
	strcpy(dest, src);
	puts(dest);

	return 0;
}