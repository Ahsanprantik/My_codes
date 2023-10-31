#include <stdio.h>

double fnc(double a)
{
	double b;
	b=5;
	return a/b;
}
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%lf", fnc(a));
}