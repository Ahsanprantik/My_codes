/*	Generalized access to any 2d array in a three dimensional array with pointer	*/
#include <stdio.h>

void pr_row(int row_no, int row_d, int *p)
{
	int i;

	p = (int *)p + (row_no * row_d);

	for(i=0; i<row_d; ++i)	printf("%d ", p[i]);

	printf("\n");
}

void pr_ara(int ara_no, int ara_d1, int ara_d2, int *p)
{
	int t, i;

	p = (int *)p + (ara_no * ara_d1 * ara_d2);

	for(t=0; t<ara_d1; ++t)
		pr_row(t, ara_d2, (int *)p[t]);
}

int main()
{
	int num[2][3][4], i, t;

	for(t=0; t<3; ++t)
		for(i=0; i<4; ++i)
			num[1][t][i] = (t*4) + i+1;

	pr_ara(1, 3, 4, (int *) num[1]);	/*	print 2nd array	*/

	return 0;
}
/*	make & g++: Segmentation fault (core dumped)	*/