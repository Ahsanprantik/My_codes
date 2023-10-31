#include <stdio.h>

int main()
{
	int a[5]={20, 30, 40, 50, 60};
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%u\n%u\n%u\n", a, &a[0], &a[1]);
	return 0;
}