#include <stdio.h>

int main()
{
	FILE *inp;
	
	inp=fopen("Prime.txt", "r");
	
	char input[100];
	
	fgets(input, 80, inp);
	
	puts(input);
}