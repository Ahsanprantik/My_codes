/*	This program is wrong.	*/
#include <stdio.h>

int main()
{
	int x, *p;

	x = 10;
	p = x;	/*	p = &x;	*/

	printf("%d\n", *p);

	return 0;
}
/*	gcc RTE:
		segmentation fault (core dumped)	*/