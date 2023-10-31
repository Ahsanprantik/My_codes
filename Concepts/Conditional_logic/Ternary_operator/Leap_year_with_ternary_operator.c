#include <stdio.h>
/*Use of ternery operator*/
void leap_year_test(int y)
{
	if(!(y%100) ? !(y%400) : !(y%4))
		printf("%d leap.\n", y);
	else printf("%d not leap.\n", y);
}

int main()
{
	int y[4]={1996, 1998, 2000, 2100};
	int i;
	printf("\n");
	for(i=0; i<4; i++) leap_year_test(y[i]);
	
	getchar();
	return 0;
}
