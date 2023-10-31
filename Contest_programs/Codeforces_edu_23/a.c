#include <stdio.h>
#include <stdlib.h>

int mn(int a, int b)
{
	if(a<b)	return a;
	return b;
}

int hunt(void)
{
	int x1, x2, y1, y2, x, y;
	int dx, dy, mx, my;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d", &x, &y);

	dx = abs(x1-x2);
	dy = abs(y1-y2);

	if(dx%x)	return 0;
	else mx = dx/x;
	if(dy%y)	return 0;
	else my = dy/y;

	if(mx!=my && (1 & abs(mx-my)))	return 0;
	
	return 1;
}

int main()
{
	if(hunt())	printf("YES\n");
	else printf("NO\n");
}