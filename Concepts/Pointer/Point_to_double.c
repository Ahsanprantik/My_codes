#include <stdio.h>

int main()
{
	double x = 100.1, y;
	int *p;

	/* The next statement causes p (which is an
		integer pointer) to point to a double. */
	p = (int *) &x;

	/* The next statement does not operate as
		expected. */
	y = *p;

	
	printf("%f\n", y);

	y = x;


	printf("%f\n", y);
	
	return 0;
}
