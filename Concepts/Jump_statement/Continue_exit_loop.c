#include <stdio.h>

int main()
{
	char ch;
	int done;

	done = 0;
	while(!done)	{
		ch = getchar();

		if('$' == ch)	{
			done = 1;
			continue;
		}
		putchar(ch+1);
	}
	printf("\n");

	return 0;
}