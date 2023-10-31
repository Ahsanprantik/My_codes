#include <stdio.h>
#include <stdlib.h>

int main()
{
	double d;
	scanf("%lf", &d);
	FILE *rough;
	if(freopen("Rough.txt", "w", rough)==NULL) {
		perror("freopen() failed");
		return EXIT_FAILURE;
	}
	printf("%.3g\n", d);
	fclose(rough);
}