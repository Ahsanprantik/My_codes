# include <stdio.h>

int main()
{
	int base;
	int entry, data;
	int ncr(int n, int r);
	scanf("%d", &base);
	for (entry = 0; entry <= base-1; entry++)
	{
		data = ncr(base, entry);
		printf("%d, %d, %d", data, base, entry);
	}
	return 0;
}
int ncr(int n, int r)
{
	int ncr;
	long int fact(int);
	ncr = fact(n) / (fact(r) * fact(n - r));
	return ncr;
}
long int fact(int x)
{
	long int f = 1;
	int i;
	if (x > 0)
	{
	for (i = 1; i <= x; i++)
	f = f * i;
	return f;
	}
	else
	return f = 1;
}
