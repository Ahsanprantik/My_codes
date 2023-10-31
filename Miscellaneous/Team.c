#include <stdio.h>

int main()
{
	int n, m, x, y, z, x1, y1;
	scanf("%d %d %d %d %d", &n, &m, &x, &y, &z);
	while(x-- && n>0)	n-=3;
	if(n<0)	n=0;
	while(y-- && n>0)	n-=2;
	if(n<0)	n=0;
	while(z-- && n>0)	n--;
	while(z-- && m>0)	m--;
	if(m==0 && n==0)	printf("Yes\n");
	else	printf("No\n");
	return 0;
}