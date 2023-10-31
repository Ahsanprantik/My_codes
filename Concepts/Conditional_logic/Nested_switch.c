#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers to divide: ");
	scanf("%d %d", &a, &b);
	switch(a)	{
		case 1:
			switch(b)	{
				case 0:
					printf("Divide by zero error.\n");
					break;
				case 1:
					printf("It's 1.\n");
					break;
				default:
					printf("It's not an integer.\n");
			}
			break;
		case 0:
			printf("It's 0.\n");
			break;
		default:
			printf("Process.\n");
			break;
	}
	return 0;
}