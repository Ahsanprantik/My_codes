#include <cstdio>

int main()
{
	int y = 5;

	if(int x = 0)	{	/* This passes zero to the
						   logic of selection statement 'if',
						    causing the statement terminate */
		y = 0;
	}

	printf("%d\n", y);	/* will print the initial value */

	return 0;
}