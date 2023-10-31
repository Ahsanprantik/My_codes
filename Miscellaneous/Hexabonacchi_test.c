#include <stdio.h>
int a, b, c, d, e, f;
int fn( int n ) {
	if(n > 5)	{
		printf("fn(%d) [ ", n);
	}
    if( n == 0 ) {
		printf("a + ");
		return a;
    }
    if( n == 1 ) {
		printf("b + ");
		return b;
    }
    if( n == 2 ) {
		printf("c + ");
		return c;
    }
    if( n == 3 ) {
		printf("d + ");
		return d;
    }
    if( n == 4 ) {
		printf("e + ");
		return e;
	}
    if( n == 5 ) {
		printf("f + ");
		return f;
    }
	if(n > 5)	{
		printf(" ]");
	}
    return ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
