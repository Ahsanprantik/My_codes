#include <stdio.h>
#define dist2(x1, y1, x2, y2)	((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))
#define determin(x1, y1, x2, y2, x3, y3)	((x1-x3)*y2 + (x2-x1)*y3 + (x3-x2)*y1)

int main(void)
{
	long long int ax, ay, bx, by, cx, cy;

	scanf("%I64d %I64d %I64d %I64d %I64d %I64d", &ax, &ay, &bx, &by, &cx, &cy);

	if(dist2(ax, ay, bx, by) == dist2(bx, by, cx, cy) && determin(ax, ay, bx, by, cx, cy))
		printf("Yes\n");
	else printf("No\n");

	return 0;
}
