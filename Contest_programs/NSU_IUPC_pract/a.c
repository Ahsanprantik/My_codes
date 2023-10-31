#include <stdio.h>

void tcase(int i)
{
	int r, ord[4][2];
	
	scanf("%d", &r);
	
	ord[0][0] = ord[3][0] = -(r*9)/4;
	ord[0][1] = ord[1][1] = (3*r)/2;
	ord[3][1] = ord[2][1] = -ord[0][1];
	ord[1][0] = ord[2][0] = (11*r)/4;
	
	printf("Case %d:\n", i);
	printf("%d %d\n", ord[0][0], ord[0][1]);
	printf("%d %d\n", ord[1][0], ord[1][1]);
	printf("%d %d\n", ord[2][0], ord[2][1]);
	printf("%d %d\n", ord[3][0], ord[3][1]);
}
	
	
int main(void)
{
	int i, t;
	
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)	tcase(i);
	
	return 0;
}