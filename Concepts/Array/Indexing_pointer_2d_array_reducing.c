/*	Simply access a row of a 2d array	*/
#include <stdio.h>

int num[10][10];

void pr_row(int j)
{
	int *p, t;

	p = (int *) &num[j][0];	/*	get address of first element in row j	*/

	for(t=0; t<10; ++t)	printf("%d ", *(p+t));

	printf("\n");
}

int main()
{
	pr_row(3);	/*	Print the (3+1)=4th row	*/

	return 0;
}