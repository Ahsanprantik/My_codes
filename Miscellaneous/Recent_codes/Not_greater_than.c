#include <stdio.h>

int main()
{
	int n, i;
	n=10;
	for(i=1; !(i>n); i++)	{	//Not greater than n form
		printf("%d\n", i);		//Prints upto n
	}

	return 0;
}