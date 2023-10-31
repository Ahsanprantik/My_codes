#include <stdio.h>

struct st{
	int r;
	char n[20];
};
void main()
{
	struct st x, y;
	scanf("%d %s", &x.r, x.n);	//data entry
	y=x;	//Entire data copied to y
	printf("\n%d: %s\n", y.r, y.n);	//will show data, copied from x

	/*printf("\nSize: %d\nx:%p\ny:%p\n", sizeof x, &x, &y);	//info about the 2 structures*/
}