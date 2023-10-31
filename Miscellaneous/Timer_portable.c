#include <stdio.h>
#include <time.h>
//developping
//PC edition needed
int main()
{
	long long i;
	long double s, t;
	int m, h;
	t=(double)CLOCKS_PER_SEC/100.0;
	printf("Set timer(sec): ");
	scanf("%d %c %d %c %d %c", &s);
	for(i=clock()+t; ; i+=t, s-=0.01) {
		clrscr();
		printf("Time remaining: %d\n", j);
		while(clock()<i) {}
	}
	printf("Time over\n");
	printf("\nThank you for using me.\nR. Giskard.");
	getchar();
}
