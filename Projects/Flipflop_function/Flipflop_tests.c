#include <stdio.h>
//Wishing to do fibonacchi series.
int series(int num)
{
	num=(num-1)+(num-2);
	return num;
}

void main()
{
	int s, i=5;
	s=i;
	while(i--)	{
		s=series(s);
		printf("%d\n", s);
	}
	return;
}
