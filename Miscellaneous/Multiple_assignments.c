#include <stdio.h>
//Assignment operator = can be used in middles only if it has no trailing constant or function. a=3*b=c is thus wrong.
void main()
{
	int a, b, c, d=2;
	a=2;
	b=5;
	c=3;
	a-=b+=c*=3;	//b=b+c=14
	printf("%d %d %d", a, b, c);
	return;
}
