#include <stdio.h>

int main()
{
	int m, n, i;
	for(n=1; n<=20; n++)	{
		printf("Multiplication of %d:\n", n);
		for(m=n, i=1; i<=10; m=m+n, i++)	{
			printf("%d X %d = %d\n", n, i, m);
		}
		printf("\n");
	}
	return 0;
}
		