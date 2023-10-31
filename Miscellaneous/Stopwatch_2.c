#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
	long double i, s, t;
	int m, h;
	t=(double)CLOCKS_PER_SEC/100.0;
	getch();
	for(i=clock()+t, m=0, h=0, s=0.0; ; i+=t, s+=0.01) {
		if(s>59.99) {
			if(m>59) {
				m=0;
				h++;
			}
			else {
				s=0.0;
				m++;
			}
		}
		printf("%d : %d : %.2lf\n", h, m, s);
		while(clock()<i) {}
		clrscr();
	}
	printf("\nThank you for using me.\nR. Giskard.");
	getchar();
}