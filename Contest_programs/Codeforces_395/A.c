#include <stdio.h>

int lcm(int a, int b)
{
	int t, m;

	m = a * b;

	while(b)	{
		t = b;
		b = a % b;
		a = t;
	}

	return m/a;
}

int main()
{
	int n, m, z, ans, i, num;

	scanf("%d %d %d", &n, &m, &z);
	i = lcm(n, m);

	for(ans=0, num=i; num <= z; ++ans, num+=i) ;

	printf("%d\n", ans);

	return 0;
}