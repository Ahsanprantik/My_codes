#include <stdio.h>

int series()
{
	static int num=100;//initialized for the first time only....(must be initialized with the declaration)

	num=num+23;
	return num;
}

void main()
{
	int s=series();
	while(s<500)	{
		printf("%d\n", s);
		s=series();
	}
	return;
}
