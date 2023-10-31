#include <stdio.h>
#include <time.h>

#define lim 1e8

int main()
{
	int init;
	printf("Press ENTER to start....");
	getchar();
	puts("Time:\n");

	init = clock();
	while(1)    printf("\r\t %07.4f", (double)(clock()-init)/(CLOCKS_PER_SEC));

	printf("\nThank you for using me.\nR. Giskard.");

	return 0;
}
