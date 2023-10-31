#include <stdio.h>
#include <string.h>

#define size 100001
#define MAX(a, b) (a>b ? a:b)

char a[size], b[size];

int main()
{
	strcpy(a, "ab");
	strcpy(b, "abcd");

	printf("%d\n", strstr(a, b));

	return 0;
}