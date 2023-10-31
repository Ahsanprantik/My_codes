#include <stdio.h>

double min(double a, double b)
{
	if(a<b)	return a;
	return b;
}

double absol(double a, double b)
{
	if(a<b)	return b-a;
	return a-b;
}

int main(void)
{
	double n, a, cur, mn, ab;
	int t;

	scanf("%lf %lf", &n, &a);

	mn = 200;

	for(t=3; t<=n; t++)	{
		cur = (2*90*(t-2)*(1 - (n-2)/n))/2;
		ab = absol(cur, a);
		if(ab<mn)	mn = ab;
		else break;
	}
	t--;
	printf("2 1 %d\n", t);

	return 0;
}