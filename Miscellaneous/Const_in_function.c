#include <stdio.h>
#include <mylib.h>
#include <windows.h>

void const_changer(int n)
{
	n--;
	printf("In function const_changer: %d\n", n);
	return;
}

void main()
{
	const int num=3;
	const_changer(num);
	printf("In function main: %d\n", num);
}
