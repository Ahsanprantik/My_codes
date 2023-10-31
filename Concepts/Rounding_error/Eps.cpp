/*	A program to demonstrate the use of epsilon
	to avoid rounding error.	*/
#include <bits/stdc++.h>
#define eps 1e-4

int main()
{
	double a = 0, b = 0;

	for(int i=1; i<=10; i++)	a += .1;
	for(int i=1; i<=8; i++)	b += .125;

	if(a==b)	printf("YES\n");
	else printf("NO\n");

	if(fabs(a-b)/b<eps)	printf("YES\n");
	else printf("NO\n");

	printf("%.30f\n", a);
	printf("%.30f\n", b);

	return 0;
}
