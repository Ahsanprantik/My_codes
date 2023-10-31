#include <stdio.h>
#include <math.h>

int main()
{
	const double pi=2.0*acos(0.0);
	int t, i;
	scanf("%d", &t);
	double R, n, ans[++t];

	for(i=1; i<t; i++)	{
		scanf("%lf %lf", &R, &n);
		ans[i]=R*(sin(pi/n)/(sin(pi/n)+1.0));
	}

	for(i=1; i<t; i++)	{
	printf("Case %d: %.6lf\n", i, ans[i]);
	}

	return 0;
}