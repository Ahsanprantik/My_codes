#include <stdio.h>

int main()
{
	int a, b;
	FILE *input;
	input=fopen("Input_scanf.in", "r");
	while(fscanf(input, "%d %d", &a, &b)==2)	{
		printf("%d\n", a+b);
	}
	return 0;
}
