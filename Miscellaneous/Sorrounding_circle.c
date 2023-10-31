#include <stdio.h>
#include <math.h>

int main()
{
	double pi, s, r;
	pi=acos(-1);
	printf("Enter the radious of circle(Unit): ");
	scanf("%lf", &r);
	s=2.0*pi*(double)r;
	printf("Sorrounding of the circle(Unit): %lf", s);
	return 0;
}