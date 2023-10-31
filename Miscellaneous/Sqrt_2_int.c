#include <stdio.h>
#include <math.h>

int main()
{
	double a, s;
	int num;
	printf("Enter a number to see the nearest integer of its square root: ");
	scanf("%lf", &a);
	s=sqrt(a);
	num=(int)s;
	printf("The integer is %d", num);
	return 0;
}