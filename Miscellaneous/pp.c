#include <stdio.h>

int main()
{
	FILE *inp;
	
	inp=fopen("Primes.txt", "w");
	
	char input[100];
	
	gets(input);
	
	fputs(input, inp);
}