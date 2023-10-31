#include <stdio.h>
#include <string.h>

#define MAX(x, y) (x*(x>y) | y*(y>x) || x*(x==y))
#define MIN(x, y) (x*(x<y) | y*(y<x) || x*(x==y))

int if_in(int final[2][3], int vrtx[2][3])
{
	int i, max[2], min[2];

	for(i=0; i<3; ++i)	{
		max[0] = MAX(final[0][i], final[1][i]);
		min[0] = MIN(final[0][i], final[1][i]);
		max[1] = MAX(vrtx[0][i], vrtx[1][i]);
		min[1] = MIN(vrtx[0][i], vrtx[1][i]);
		if(max[0]>min[1] && max[1]>min[0])	{
			final[0][i] = MAX(max[0], max[1]);
			final[1][i] = MIN(min[0], min[1]);
		}
		else return 0;
	}
	return 1;
}

int dif(int a, int b)
{
	if(a>b)	return a-b;
	return b-a;
}

int cal_vol(int final[2][3])
{
	return dif(final[0][0], final[1][0]) * dif(final[0][1], final[1][1]) * dif(final[0][2], final[1][2]);
}

void in(int *p)
{
	int i;
	for(i=0; i<6; ++i, (int *)p++)	scanf("%d", p);
}

int main()
{
	int n, t, x[2][3], y[2][3], i, j;
	scanf("%d", &t);
	int ans[t];

	for(i=0; i<t; ++i)	{
		in((int *)y);
		for(j=1; j<n; ++j)	{
			ans[i] = 1;
			in((int *)x);
			if(!if_in(y, x))	ans[i] = 0;
		}
		if(ans[i])	ans[i] = cal_vol(y);
	}

	for(i=0; i<t; ++i)	{
		printf("Case %d: %d\n", i+1, ans[i]);
	}

	return 0;
}