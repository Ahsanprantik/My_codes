#include <stdio.h>
#include <time.h>

#define lim 100000000
//!can't stop
//PC edition needed
int main()
{
	int i, c, k;
	double j;
	printf("Press any key to start....");
	getchar();
	c=CLOCKS_PER_SEC/100;
	for(i=clock()+CLOCKS_PER_SEC, k=i/100, j=0; j<lim; ) {
		if(clock()>=k) {
			j+=0.01;
			k+=c;
			clrscr();
			printf("%.02lf s\n", j);
		}
		if(clock()>=i) {
			j+=1.0;
			i+=CLOCKS_PER_SEC;
		}
	}
	printf("\nThank you for using me.\nR. Giskard.");
}
