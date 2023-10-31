#include <stdio.h>

void main()
{
	char ch;
	int i;
	float f;	//!if double, then correct
	double d;	//declaration
	double result;

	ch='b';
	i=2;
	f=.2;
	d=2.00000001;	//assignment

	result= (ch/i);	//(c/2) = (98/2) = (49.000000)
	printf("%lf\n", result);
	result+= (f*d);	//+= (.2000 * 2.000000001) += (.4000000002) = 49.4000000002
	printf("%.9lf\n", result);
	result-= (f+i);	//-= (.2 + 2.0) -=2.2 = 47.2000000002
	printf("%.9lf\n", result);	//execution
}
