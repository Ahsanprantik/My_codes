#include <stdio.h>

int  main()
{
	float f;
	scanf("%f", &f);
	printf("%f\n%.5f\n%.00000002f", f, f, f);
}