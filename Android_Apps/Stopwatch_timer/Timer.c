#include <stdio.h>
#include <time.h>

#define eps 1e-15

int main(void)
{
	long double init, s;
	int m, h;
	char nouse;

	printf("Set timer(sec): ");
	scanf("%d %c %d %c %lf", &h, &nouse, &m, &nouse, &s);

	puts("Time remaining:");
	init = clock() + (s + 60 * (m + 60 * h)) * CLOCKS_PER_SEC;
	printf("%f", init);
    printf("\r\t %02d : %02d : %.2f", h, m, s);
	while(clock()<=init) {
        h = (double)(init-clock())/(CLOCKS_PER_SEC*3600.0);
        m = (double)(init-clock())/(CLOCKS_PER_SEC*60.0);
        s = (double)(init-clock())/(CLOCKS_PER_SEC);
		printf("\r\t %02d : %02d : %.2f", h, m, s);
	}

	printf("Time over\n");
	printf("\nThank you for using me.\nR. Giskard.");
	getchar();

	return 0;
}
