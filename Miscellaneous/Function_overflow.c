#include <stdio.h>

int absolute(int x) //don't return double value 
{
	if(x<0) return -x;
	return x;
}
double absolute_2(double x)
{
	if(x<0)	return -x;
	return x;
} //;)
int main()
{
	printf("%d\n", absolute(2));
	printf("%lf", absolute(-24.47)); //double value nai
	return 0;
}