#include <stdio.h>

int main()
{
	FILE *input, *output;
	input=fopen("a.txt", "r");
	output=fopen("a.html", "w");
	char str[80];
	fgets(str, 80, input);
	fputs(str, output);
	return 0;
}