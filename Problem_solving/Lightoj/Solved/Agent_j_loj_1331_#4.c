#include <stdio.h>
#include <math.h>

#define A acos(((b*b)+(c*c)-(a*a))/(2*b*c))
#define B acos(((c*c)+(a*a)-(b*b))/(2*c*a))
#define C acos(((a*a)+(b*b)-(c*c))/(2*a*b))

int main(void)
{
	int t, i;
	double r1, r2, r3, a, b, c, area, s;

	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf("%lf %lf %lf", &r1, &r2, &r3);

		a = r1 + r2;
		b = r2 + r3;
		c = r3 + r1;
		s = (a+b+c)/2;

		area = sqrt(s*(s-a)*(s-b)*(s-c)) - (r1*r1*B + r2*r2*C + r3*r3*A)/2;

		printf("Case %d: %.8f\n", i, area);
	}

	return 0;
}
