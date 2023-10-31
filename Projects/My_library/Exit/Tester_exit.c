#include <stdio.h>
#include <windows.h>
#include "my_exit.c"

void Tester()
{
	my_exit(-1);
}

void main()
{
	Tester();
}
