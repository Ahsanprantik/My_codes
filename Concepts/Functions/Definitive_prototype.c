#include <stdio.h>

/*	This definition will also
	serve as prototype within this program	*/
void f(int a, int b)
{
	printf("%d\n", a%b);
}

int main(void)
{
	f(12, 10);

	return 0;
}