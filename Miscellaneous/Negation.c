#include <stdio.h>

int main()
{
	int all_bits=-1, a=1<<3;
	a^=all_bits;
	printf("%d", a);
}