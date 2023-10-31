#include <stdio.h>

int main()
{
	FILE *input, *output;
	
	input=fopen("Input.txt", "r");
	output=fopen("Output.txt", "w");
	
	int a, b, sum;
	
	fscanf(input, "%d%d", &a, &b);
	
	sum=a+b;
	fprintf(output, "%d", sum);
	
	fclose(input);
	fclose(output);
	
	return 0;
}