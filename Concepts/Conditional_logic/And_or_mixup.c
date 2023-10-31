/*	&& and || operators mixed up	*/
#include <stdio.h>

int main()
{
	int a, b, c, t=8;
	while(t--)	{
		scanf("%d %d %d", &a, &b, &c);
		if(t==7) printf("\n");
		printf("In: %d %d %d\t(&&): %d\t(||): %d\t)(: %d\n",
			a, b, c, (a && b) || c, a && (b || c), a && b || c);
	}
	return 0;
}
/*
Input:
0 0 0
0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0
1 1 1

*/