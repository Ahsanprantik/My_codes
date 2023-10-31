#include <stdio.h>
#include <math.h>
/*
solution of 8n^2<64nlog2 n =>n<8log2 n
where 'n' is a natural number
"Algorithm" book's Exercise no: 1.2-2
*/
void main()
{
	double lhs, rhs;
	int n=2;
	while(1) {
		lhs=pow(2, n);
		rhs=pow(n, 8);
		if(lhs>=rhs) break;//this case won't be printed
		printf("n=%d\n%g\n%g\n\n", n, lhs, rhs);
		n++;
	}
}