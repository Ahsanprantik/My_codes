#include <stdio.h>

int main()
{
	int x;
	char y;

	for(x=0, y=0; x+y<10; ++x)	{
		y = getchar() - '0';	/* substract the ASCII code for 0 from y */
		printf("%d\n", y);
	}

	return 0;
}
/*  'getchar()' is not working properly in command line input.
	To be checked in other I/O systems. */