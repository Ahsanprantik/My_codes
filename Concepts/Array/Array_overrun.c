/*	Array overrunning test */
#include <stdio.h>

int main()
{
	int count[10], i;

	/*	This causes count to be overrun */
	for(i=0; i<100; ++i)	count[i] = i;

	return 0;
}
/*	Linux g++ error: Segmentation fault (core dumped) */