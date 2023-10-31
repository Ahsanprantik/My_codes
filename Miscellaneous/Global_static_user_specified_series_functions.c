#include <stdio.h>

static int series_num;
int series(void);
void series_starter(int seed);

int series()
{
	printf(" %d ", series_num);
	series_num+=24;
	return series_num;
}

void series_starter(int seed)
{
	series_num=seed;
	return;
}
