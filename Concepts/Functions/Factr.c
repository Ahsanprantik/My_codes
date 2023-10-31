#include <stdio.h>

int factr(int n)
{
	int ans;

	if(n==1)	{
		printf("\nfuncmem\t\tnmem\t\tansmem\t\tnval\tansval\n");
		printf("%p\t%p\t%p\t%d\t%d\n", factr, &n, &ans, n, ans);
		return 1;
	}

	ans = factr(n-1)*n;
	printf("%p\t%p\t%p\t%d\t%d\n", factr, &n, &ans, n, ans);
	return ans;
}

int fact(int n)
{
	int t, ans;

	ans = 1;
	for(t=1; t<=n; t++)
		ans *= t;

	return ans;
}

int main(void)
{
	printf("\n%d\t%d\n", factr(5), fact(5));

	return 0;
}