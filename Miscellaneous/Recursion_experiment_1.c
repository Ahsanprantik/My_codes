#include <stdio.h>
#include <time.h>
//inserting time info of var 'n'
int sum(int n, time_t clk)//time counts from first iteration, by clock rate
{
	printf("n=%d, ptr=%x, clk=%u\n", n, &n, (clock()-clk)); //info of var 'n'
	if(n) return sum(n-1, clk)+n;
	return 0;
}

void main()
{
	int s;
	s=sum(10, clock());
	printf("\nSummation: %d\n", s);
}