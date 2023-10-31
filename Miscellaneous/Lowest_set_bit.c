#include <stdio.h>
#include <mylib.h>

int main()
{
	int x=13<<6;
	showbin(x, 16);
	printf("\tx\n");
	showbin(-1, 16);
	printf("\t-1\n");
	showbin(x-1, 16);
	printf("\tx-1\n");
	showbin(~(x-1), 16);
	printf("\t~(x-1)\n");
	showbin(x & ~(x-1), 16);
	printf("\tx & ~(x-1)\n");
}
