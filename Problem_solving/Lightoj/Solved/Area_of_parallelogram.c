#include <stdio.h>
#include <stdlib.h>
#define dx  ax+cx - bx
#define dy ay+cy - by
#define area abs(ax*(by-cy) + bx*(cy-ay) + cx*(ay-by))

int main(void)
{
	int t, i;
	int ax, ay, bx, by, cx, cy;

	scanf("%d", &t);
	
	for(i=1; i<=t; i++)	{
		scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
		printf("Case %d: %d %d %d\n", i, dx, dy, area);
	}

	return 0;
}
