#include <stdio.h>

int main()
{
	int a, b;
	printf("\nEnter two integers: ");
	scanf("%d %d", &a, &b);	//I/O

	if(b) printf("The division is: %d\n", a/b);
	else printf("Can't devide by zero.\n");	//Actions

	return 0;
}
