#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, s, temp, area;
	scanf("%lf %lf %lf", &a, &b, &c);
	s=(a+b+c)/2.0;
	temp=s*(s-a)*(s-b)*(s-c);
	area=sqrt(temp);
	printf("The area of the triangle is %.2lf", area);
	return 0;
}