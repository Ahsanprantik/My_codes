#include <cstdio>

int main()
{
	int y = 5;

	if(int x = 20)	{	/* Passes non-zero value 20 to
						   the logical portion of 'if' */
		x -= y;

		if(x > 10)	y = 0;	
	}

	printf("%d\n", y);

	return 0;
}