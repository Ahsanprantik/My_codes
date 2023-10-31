/* Block statement without control statement */
#include <stdio.h>

int main()
{
	int i;

	/* if(0)	/* hide this to let the block work */
	{	/* a block statement */
		i = 120;
		printf("%d\n", i);
	}

	return 0;
}
/*	Note: Block statements may be used to keep one type of
	statements together so that they can be controlled easily
	in case of sudden need. */