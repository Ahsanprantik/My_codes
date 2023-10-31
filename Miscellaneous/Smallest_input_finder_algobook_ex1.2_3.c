#include <stdio.h>
#include <math.h>
/*
Smallest possible n such that 100n^2 < 2^n
where 'n' is a natural number.
*/
void main()
{
	double lhs, rhs;
	int n=1;
	while(1) {
		lhs=100*n*n;
		rhs=pow(2, n);
		if(rhs>=lhs) break;//this case won't be printed
		n++;
	}
	printf("n=%d\n%g\n%g\n\n", n, lhs, rhs);
}