#include <bits/stdc++.h>

int main()
{
	double a = 0, b = 0;

	for(int i=1; i<=10; i++)	{
		a += .1;
		printf("%.30f\n", a);
	}
	for(int i=1; i<=8; i++)	b += .125;

	if(a==b)	printf("YES\n");
	else printf("NO\n");

	printf("%.30f\n", a);
	printf("%.30f\n", b);

	return 0;
}
