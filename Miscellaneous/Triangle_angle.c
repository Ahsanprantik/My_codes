#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, A, B, C, temp, coeff;
	coeff=180.0/acos(-1);
	printf("Enter the 3 sides of a triangle: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	temp=((b*b+c*c-a*a)/(2.0*b*c));
	A=acos(temp)*coeff;
	temp=((a*a+c*c-b*b)/(2.0*a*c));
	B=acos(temp)*coeff;
	temp=((a*a+b*b-c*c)/(2.0*a*b));
	C=acos(temp)*coeff;
	printf("Angles: %.2lf, %.2lf, %.2lf", A, B, C);
	return 0;
}