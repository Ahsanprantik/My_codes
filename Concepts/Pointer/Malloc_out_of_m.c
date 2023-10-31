#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p, *q;
	int i;

	for(i=1; p; i++)	{
		q = p;
		p = (char *)malloc(1);
	}
	printf("%d -- %p -- %u -- out of memory.\n", i, q, sizeof(q));
	
	return 0;
}