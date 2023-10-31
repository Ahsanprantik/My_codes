#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, dist, d2;
	scanf("%lf %lf", &x, &y);
	d2=(double)x*x+(double)y*y;
	dist=sqrt(d2);
	printf("%lf", dist);
	 return 0;
}