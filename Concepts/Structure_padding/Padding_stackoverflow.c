#include <stdio.h>

/*
IMPORTANT NOTE: Both the C and C++ standards state that structure alignment is implementation-defined. Therefore each compiler may choose to align data differently, resulting in different and incompatible data layouts. For this reason, when dealing with libraries that will be used by different compilers, it is important to understand how the compilers align data. Some compilers have command-line settings and/or special #pragma statements to change the structure alignment settings.
*/

struct X {
	short s; /* 2 bytes */
			/* 2 padding bytes */
	int i; /* 4 bytes */
	char c; /* 1 byte */
			/* 3 padding bytes */
};
	
struct Y {	//sorted for minimizing size
	int i; /* 4 bytes */
	char c; /* 1 byte */
			/* 1 padding byte */
	short s; /* 2 bytes */
};
struct Z {	//sorted for minimizing size
	int i; /* 4 bytes */
	short s; /* 2 bytes */
	char c; /* 1 byte */
			/* 1 padding byte */
};
int main()
{
	struct X X;
	struct Y Y;
	struct Z Z;
	const int sizeX = sizeof(X); /* = 12 */
	const int sizeY = sizeof(Y); /* = 8 */
	const int sizeZ = sizeof(Z); /* = 8 */
	printf("%d\n", sizeX);
	printf("%d\n", sizeY);
	printf("%d\n", sizeZ);
}