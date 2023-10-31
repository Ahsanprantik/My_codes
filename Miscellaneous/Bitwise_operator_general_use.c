#include <stdio.h>
//Use of bitwise '&' '|' in general expressions.
void main()
{
	int a=4;

	if(3<a | a<4) printf("Yahoo 'OR' worked!\n");
	else printf("No 'OR' didn't work.\n");
	if(3<a & a<5) printf("Yahoo 'AND' worked!\n");
	else printf("No 'AND' didn't work.\n");
}
