#include <stdio.h>
#include <math.h>

int main()
{
	int i, n;
	double A, B, x, y, v, v_max, var;
	scanf("%lf %lf", &A, &B);
	scanf("%d", &n);
	v_max=100000000.0;
	for(i=0; i<n; i++)	{
		scanf("%lf %lf %lf", &x, &y, &v);
		x-=A;
		y-=B;
		var=sqrt(x*x+y*y)/v;
		if(var<v_max)	v_max=var;
	}
	printf("%.8lf\n", v_max);
	return 0;
}