#include <stdio.h>

int main()
{
	int i;
	for(i=1; i<10; i++) {
		if(i & 1) continue;	//if odd
		printf("%d ", i);
	}
	return 0;
}