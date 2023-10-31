#include <stdio.h>
#include <math.h>
struct info{
	double t, d, v, f, m, g;
};
/*time in year & distance in kilometer*/

struct info func(struct info a)
{
    double lim=pow(10, -100);
	a.t*=(365.0*24.0*60.0*60.0);
	a.v= a.d/a.t;
	acc= //unfinished
	for(int r=0; a.g>lim; r+=.1)  {
        a.f=//unfinished
	}
	return a;
}

int main()
{
	struct info a, b;
	printf("Distance(km)\t: ");
	scanf("%lf", &a.d);
	printf("Time(Year)\t: ");
	scanf("%lf", &a.t);
	b=func(a);
	printf("\nTime\t\t: %lf sec\nVelocity\t: %lf km/sec\n", b.t, b.v);
	getchar();
	printf("%lf %lf %lf")
	return 0;
}
