#include <stdio.h>

int main()
{
	FILE *out;
	int i;
	out = fopen("Input.txt", "w");

	fprintf(out, "10000\n");

	for(i=0; i<10000; ++i)	fprintf(out, "128425485935180314\n");

	fclose(out);

	return 0;
}