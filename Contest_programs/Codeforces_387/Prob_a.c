#include <stdio.h>
#include <math.h>

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(a=sqrt(n); n%a; a--);
	b=n/a;
	printf("%d %d\n", a, b);
	return 0;
}