/*	Classic form or the old style of
	parameter declaration	*/
#include <stdio.h>

float f(a, b, ch)
int a, b;	/*	Two at a time is possible	*/
char ch;
{
	printf("%d%c%d\n", a, ch, b);

	return a + (float)b/10;
}

int main(void)
{
	float fh;

	fh = f(1, 5, '.');
	printf("%.1f\n", fh);

	return 0;
}