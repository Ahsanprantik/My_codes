#include <stdio.h>

int a, b, c, d, e, f, ara[10001];

int fn( int n ) {
    if( n == 0 ) {
		ara[0]= a % 10000007;
		return ara[0];
    }
    if( n == 1 ) {
		ara[1]= b % 10000007;
		return ara[1];
    }
    if( n == 2 ) {
		ara[2]= c % 10000007;
		return ara[2];
    }
    if( n == 3 ) {
		ara[3]= d % 10000007;
		return ara[3];
    }
    if( n == 4 ) {
		ara[4]= e % 10000007;
		return ara[4];
	}
    if( n == 5 ) {
		ara[5]= f % 10000007;
		return ara[5];
    }
    if(ara[n]==-1)	{
		ara[n] = fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
		if(ara[n] >= 10000007)	{
			ara[n]= ara[n] % 10000007;
		}
    }
    return ara[n];
}

int main() {
    int n, caseno, cases, j;
    scanf("%d", &cases);
    int ans[cases];
    for(caseno=0; caseno<cases; caseno++) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(j=6; j<=n; j++)	{
			ara[j]=-1;
        }
        ans[caseno]=fn(n);
    }
    for(caseno=0; caseno<cases; caseno++)	{
        printf("Case %d: %d\n", caseno+1, ans[caseno]);
    }
    return 0;
}
