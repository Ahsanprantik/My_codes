#include <stdio.h>

/*
Memory allocation for variables in strutures is the product of the highest sized data type within the struture. Often optimized with the sorting style. But not always.
*/

struct temp_int{
	char a[6];//6+2 bytes
	int d;//4 bytes
	char b[3];//3+1 bytes
};

struct temp_long{
	char a[6];//6+2 bytes
	long long d;//8 bytes
	char b[3];//3+5 bytes
};

int main()
{
	struct temp_int ara1;
	struct temp_long ara2;
	printf("%d\n", sizeof(ara1));
	printf("%d\n", sizeof(ara2));
}