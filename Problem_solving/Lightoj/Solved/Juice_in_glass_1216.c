#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, t;
	double r1, r2, h, p, dr, ans;

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);


		dr = r1 - r2;
		ans = 2.0 * acos(0.0) * ((dr*dr*p*p*p)/(3.0*h*h) + (dr*r2*p*p)/h + r2*r2*p);

		printf("Case %d: %.9f\n", i, ans);
	}

	return 0;
}