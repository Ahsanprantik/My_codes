#include <stdio.h>

int main()
{
	int n, i, fact=1;
	scanf("%d", &n);
	if(n==0)	{
		fact=1;
	}
	for(i=1; i<=n; i++)	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d", n, fact);
	return 0;
}