#include <stdio.h>

#define max(x, y)	x>y ? x : y;

int retans(void)
{
	int l, r, k, a, b;

	long long int x, y;

	scanf("%d %d %d %d %d", &l, &r, &a, &b, &k);

	x = a;
	y = b;
	x *= k;
	y *= k;

	if(y<l || x>r)	return 0;
	else {
		x = max((l/k)*k, x);
		while(x<=r && x<=y)	{
			if(x>=l)	return 1;
			x += k;
		}
	}

	return 0;
}

int main(void)
{
	if(retans())	printf("YES\n");
	else printf("NO\n");

	return 0;
}