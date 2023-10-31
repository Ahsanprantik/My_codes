#include <stdio.h>
int a, b, c, d, e, f, ara[6];
int fn( int n ) {
	if(n<6)	{
		ara[n]++;
	}
    if( n == 0 ) {
		return a;
    }
    if( n == 1 ) {
		return b;
    }
    if( n == 2 ) {
		return c;
    }
    if( n == 3 ) {
		return d;
    }
    if( n == 4 ) {
		return e;
	}
    if( n == 5 ) {
		return f;
    }
    return ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() {
    int n, caseno = 0, cases, i;
    scanf("%d", &cases);
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    while( cases-- ) {
			printf(">>>> ");
        scanf("%d", &n);
        for(i=0; i<6; i++)	{
			ara[i]=0;
        }
        printf("Case %d: %d\n\n\n", ++caseno, fn(n) % 10000007);
        for(i=0; i<6; i++)	{
			printf("fn(%d) = %d\n\n", i, ara[i]);
        }
    }
    return 0;
}
