#include <stdio.h>

int testbit(int a, int i)
{
	if((a & 1<<i)!=0)	{
		printf("1");
		return 1;
	}
	else {
		printf("0");
		return 0;
	}
}

int main()
{
	testbit(7, 2); //0 based index
	return 0;
}