#include <stdio.h>

void main()
{
	int q=1+(1<<8)+(1<<16)+(1<<24);//assigned 1 to every byte
	char *m;	//1 byte pointer
	m=&q;
	printf("%u %u %u %u", *m, *(m+1), *(m+2), *(m+3));
}