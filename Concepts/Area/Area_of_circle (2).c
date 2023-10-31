#include <stdio.h>
#include <math.h>

int main()
{
	double pi, area, r;
	pi=acos(-1);
	printf("Enter the radious of circle(Unit): ");
	scanf("%lf", &r);
	area=pi*(double)(r*r);
	printf("Area of the circle(Unit^2): %lf", area);
	return 0;
}