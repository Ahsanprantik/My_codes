#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(2 >= a/b && 2 >= b/a)	printf("YES\n");
	else printf("NO\n");

	return 0;
}