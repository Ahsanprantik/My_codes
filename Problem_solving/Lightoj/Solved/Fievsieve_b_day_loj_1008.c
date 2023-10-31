#include <stdio.h>
#include <math.h>

int main()
{
	long long a, b, sqr, i, t;
	long long n, sq;
	scanf("%lld", &t);
	t++;
	long long x[t], y[t];
	for(i=1; i<t; i++) {
		scanf("%lld", &n);
		sqr=sqrt(n);
		sq=(sqr*sqr);
		a=sqr;
		n-=sq;
		if(!n) b=1;//n!=0
		else if(n<=(sqr+1)) {
			a++;
			b=n;
		}
		else {
			a-=n-(sqr+2);
			b=sqr+1;
		}
		if(sqr%2==0) {
			x[i]=a;
			y[i]=b;
		}
		else {
			x[i]=b;
			y[i]=a;
		}
	}
	for(i=1; i<t; i++) {
		printf("Case %lld: %lld %lld\n", i, x[i], y[i]);
	}
	return 0;
}