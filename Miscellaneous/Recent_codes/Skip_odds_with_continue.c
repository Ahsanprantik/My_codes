#include <stdio.h>

int main()
{
	int i;
	for(i=0; i<10; i++) {
		if(i & 1)	//if odd
			continue;
		printf("%d\n", i);	//should print even numbers
	}
	return 0;
}