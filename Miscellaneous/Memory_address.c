#include <stdio.h>

int main()
{
	int x=100, y=10000;
	char ch1='A', ch2='c';
	unsigned int a1=&x;
	unsigned int a2=&y;
	unsigned int a3=&ch1;
	unsigned int a4=&ch2;
	printf("%d, %u\n", x, a1);
	printf("%d, %u\n", y, a2);
	printf("%d, %u\n", ch1, a3);
	printf("%d, %u\n", ch2, a4);
	return 0;
}