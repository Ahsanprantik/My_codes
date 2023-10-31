#include <stdio.h>

void fn(int);

int main()
{
	int num;
	printf("Enter a number: "); 
	scanf("%d", &num);
	fn(num);
	return 0;
}

void fn(int x)
{
	printf("The number you enter is: %d\n", x);
	return;
}
