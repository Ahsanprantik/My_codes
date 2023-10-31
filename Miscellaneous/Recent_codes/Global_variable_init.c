#include <stdio.h>

int n;

void check(void);

int main()
{
	check();
	printf("In function 'main()': %d\n", n);
	check();

	return 0;
}

void check(void)
{
	printf("In function 'check()': %d\n", n);
}