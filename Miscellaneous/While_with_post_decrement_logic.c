#include <stdio.h>

int main()
{
	int j;
	j=16;
	while(19>(j+=4)) printf("%d\n", j);
	printf("\n%d\n", j);
	return 0;
}