#include <stdio.h>

int main()
{
	char b=2;
	char *c;
	c=&b;
	printf("%lld\n", c);
	c=0;
	c++;
	printf("%d\n", c);
	return 0;
}