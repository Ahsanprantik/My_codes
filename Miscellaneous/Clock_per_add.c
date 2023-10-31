#include <stdio.h>
#include <time.h>

void main()
{
	int a;
	time_t clk;
	clk=clock();
	a=2+3;
	clk=clock()-clk;
	printf("%lld", clk);
	return;
}