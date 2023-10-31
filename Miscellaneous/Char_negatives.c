#include <stdio.h>
#include <stdlib.h>


int main()
{
	char c;
	int i;
	for(i=0; i>-128; i--)	{
		c=i;
		printf("%d--%c\n", c, c);
	}
	return 0;
}