#include <stdio.h>
/*'break;' is a jump statement.
But it works only with switch and loop statements.*/
int main()
{
	if(1)	{
		printf("This line wil show off.\n");
		break;	//This gives a compiler error.
		printf("This line shouldn't show off.\n");
	}

	return 0;
}
