#include <stdio.h>
#include <math.h>

int main(void)
{
	int r, d, n, x, y, r1, count;
	double ds, dd;

	scanf("%d %d %d", &r, &d, &n);
	d = r - d;

	count = 0;
	while(n--)	{
		scanf("%d %d %d", &x, &y, &r1);
		ds = sqrt(x*x+y*y);
		dd = ds - r1;
		ds += r1;
		if(dd>=d && ds<=r)	count++;
	}

	printf("%d\n", count);
	return 0;
}