#include <stdio.h>

int min(int a, int b)
{
	if(a<b)	return a;
	return b;
}

int fact(int n)
{
	int i, fct;

	for(i=1, fct=1; i<=n; i++)	fct *= i;

	return fct;
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	a = min(a, b);
	a = fact(a);

	printf("%d\n", a);

	return 0;
}