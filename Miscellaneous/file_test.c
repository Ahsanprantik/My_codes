#include <stdio.h>

int main()
{
	int a, b, c;
	FILE *input;
	input=fopen("abc.txt", "r");
	fscanf(output, "%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n", a, b, c);
	FILE *output;
	output=fopen("abc.txt", "w");
	fprintf(output, "%d\n%d\n%d\n", a, b, c);
	return 0;
}