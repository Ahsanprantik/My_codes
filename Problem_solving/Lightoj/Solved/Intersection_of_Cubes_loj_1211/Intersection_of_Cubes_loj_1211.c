#include <stdio.h>
#include <string.h>

#define min(a, b) (a<b ? a:b)
#define max(a, b) (a>b ? a:b)

int main()
{
	int t, n, i, vx[2][3], nw[2][3];
	int j, k, l;
	scanf("%d", &t);
	int ans[t];

	for(i=0; i<t; ++i)	{
		scanf("%d", &n);
		ans[i] = 1;
		for(l=0; l<n; ++l)	{
			for(j=0; j<2; ++j)	{
				for(k=0; k<3; ++k)	{
					scanf("%d", &nw[j][k]);
					if(!l)	memcpy(vx, nw, sizeof(nw));
				}
			}
			for(k=0; k<3; ++k)	{
				vx[0][k] = max(nw[0][k], vx[0][k]);
				vx[1][k] = min(nw[1][k], vx[1][k]);
				if(nw[1][k] <= vx[0][k] || nw[0][k] >= vx[1][k])	{
					ans[i] = 0;
					break;
				}
			}
		}
		if(!ans[i])	continue;
		for(k=0; k<3; ++k)	{
			ans[i] *= vx[1][k] - vx[0][k];
		}
	}

	for(i=0; i<t; ++i)	printf("Case %d: %d\n", i+1, ans[i]);

	return 0;
}