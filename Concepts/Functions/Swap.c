#include <stdio.h>

void swap(int *x, int *y)
{
	int temp;

	temp = *x;	/*	save the value at address x	*/
	*x = *y;	/*	put y into x	*/
	*y = temp;	/*	put x into y	*/
}

int main()
{
	int i, j;

	i = 10;
	j = 20;

	swap(&i, &j);	/*	pass the addresses of i and j	*/
	printf("%d %d\n", i, j);
	
	return 0;
}