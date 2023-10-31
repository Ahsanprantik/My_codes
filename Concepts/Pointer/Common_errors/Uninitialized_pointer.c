/*	This program is wrong.	*/
#include <stdio.h>

int main()
{
	int x, *p;

	x = 10;
	*p = x;

	return 0;
}
/*	An uninitialized pointer can point vital addresses
	which is potentially dangerous. Always make sure that
	a pointer is holding some valid address.	*/