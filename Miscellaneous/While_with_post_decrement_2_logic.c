#include <stdio.h>

int main()
{
	int j=0;
	while(++j<10 && j<9)
		printf("%d ", j);

	return 0;
}