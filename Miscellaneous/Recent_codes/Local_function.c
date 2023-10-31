#include <stdio.h>

int main()
{
	void f1();
	f1();
	return 0;
}

void f1()
{
	printf("This line is from f1()\n");
	return;
}
