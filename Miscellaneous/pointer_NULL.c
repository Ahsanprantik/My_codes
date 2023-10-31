#include <stdio.h>

int main()
{
	long long int *c;
	c=NULL;
	c+=100000000;
	printf("%lld\n", c);
	return 0;
}