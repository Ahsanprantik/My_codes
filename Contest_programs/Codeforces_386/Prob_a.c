#include <stdio.h>

int main()
{
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	while(a)	{
		if((a<<1)<=b && (a<<2)<=c)	break;
		else a--;
	}
	sum=a+(a<<1)+(a<<2);
	printf("%d\n", sum);
	return 0;
}