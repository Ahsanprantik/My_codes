#include <stdio.h>
#include <string.h>

#define size 100001

char a[size];

int main()
{
	int i;
	for(i=0; i<size; ++i)	printf("%d\n", *(a+i));

	return 0;
}