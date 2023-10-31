/*	Generalized access to any row of a two dimensional array with pointer	*/
#include <stdio.h>

int pr_row(int row_no, int row_d, int *p)
{
	int t;

	p = p + (row_no * row_d);

	for(t=0; t<row_d; ++t)	printf("%d ", p[t]);

	printf("\n");
}

int main()
{
	int num[10][10], i;

	for(i=0; i<10; ++i)	num[0][i] = i+1;

	pr_row(0, 10, (int *) num);	/*	print first row	*/

	return 0;
}