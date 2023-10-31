#include <stdio.h>

int a, b, c, d, e, f, ara[10001];

int fn( int n ) {
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
    if(ara[n]==-1)	{
		ara[n] = fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
		if(ara[n] >= 10000007)	{
			ara[n]-= 10000007;
		}
    }
    return ara[n];
}

int main() {
    int n, caseno, cases, j;
    scanf("%d", &cases);
    for(caseno=0; caseno<cases; caseno++) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(j=6; j<=n; j++)	{
			ara[j]=-1;
        }
        printf("Case %d: %d\n", caseno+1, fn(n));
    }
    return 0;
}
