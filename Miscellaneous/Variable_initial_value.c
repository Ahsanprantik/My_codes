#include <stdio.h>
//Initial value of different variables are different.
int a[3];
int var;

void main()
{
	static int b;
	int ara[5];
	int i=3;
	a[67]=5;
	printf("Static: %d\n", b);
	printf("Global variable: %d\n", var);
	while(i)	printf("Global array[%d]: %d\n", i, a[i--]);
	i=5;
	while(i)	printf("Local array[%d]: %d\n", i, ara[i--]);
	printf("Global array overrun: %d\n", a[67]);//Global array boundary can be overrun.
}
