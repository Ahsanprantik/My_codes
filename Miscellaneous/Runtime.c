#include <stdio.h>
#include <conio.h>
#include <time.h>

#define lim 1000
int main()
{
	int i;
	printf("Press any key to start....");
	getch(); 
	for(i=1; i<lim; i++) {
		while(clock()<(CLOCKS_PER_SEC*i)) {}
		printf("%d s\n", i);
	}
}