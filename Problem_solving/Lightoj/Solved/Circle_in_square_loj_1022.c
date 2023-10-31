#include <stdio.h>
#include <math.h>

int main()
{
	int i, t;
	double r, pi;
	pi=2.0*acos(0.0);
	scanf("%d", &t);
	t++;
	double ans[t];
	for(i=1; i<t; i++) {
		scanf("%lf", &r);
		ans[i]=(4.0-pi)*(double)r*(double)r;
	}
	for(i=1; i<t; i++) {
		printf("Case %d: %.2lf\n", i, ans[i]);
	}
	return 0;
}