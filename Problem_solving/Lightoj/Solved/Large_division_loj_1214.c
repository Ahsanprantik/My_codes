#include <stdio.h>
#include <stdlib.h>

int ifdiv(const char *a, long long int b)
{
	int i;
	long long int m, n;

	i = 0, n =0;
	if(a[i]=='-')	i++;
	
	for( ; a[i]; i++)	{
		n *= 10;
		n += a[i] - '0';
		if(n>=b)	n = n%b;
	}
	
	if(n) return 0;
	else return 1;
}

int main(void)
{
	int t, b, i;
	char a[220];
	scanf("%d", &t);

	for(i=1; i<=t; i++)	{
		scanf(" %s %d", a, &b);
		b = abs(b);
		if(ifdiv(a, b))	printf("Case %d: divisible\n", i);
		else	printf("Case %d: not divisible\n", i);
	}

	return 0;
}
/*
6
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101
*/