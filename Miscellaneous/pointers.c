#include <stdio.h>

int main()
{
	int *a;
	int b[]={0, 6, 7, 9, 7};
	int *c;
	for(int i=0; i<5; i++)	{
		c=&b[i];
		printf("%lld\n", c);//same index :)
	}
	return 0;
}