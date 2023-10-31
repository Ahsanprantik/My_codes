#include <stdio.h>

int main()
{
	int n, k, a, b, p, m1, m2;
	scanf("%d %d", &n, &k);

	b = n%k;
	a = n-b;
	m1 = a/k;
	/*	we have have a half fried and b not fried
	fry (b+p) fish. we have (a-p+b) half fried.	*/
	if((a-k+b+b)%k==0 && !b)	m2 = (a-k+b+b)/k;
	else m2 = 


	printf("%d\n", m1+m2);

	return 0;
}