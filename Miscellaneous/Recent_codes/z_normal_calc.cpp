/* This program inputs z value and outputs its
   corresponding normal curve y value	*/

#include <bits/stdc++.h>

int main()
{
	double z, Y;

	scanf("%lf", &z);

	Y = exp(-(z*z)/2.0)/sqrt(2*acos(0.0));

	printf("%.4f\n", Y);

	return 0;
}
