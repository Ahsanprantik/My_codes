#include <stdio.h>

int main()
{
	int j, s, m, ans;
	scanf("%d %d %d", &j, &s, &m);
	if(1 & (m-j)/s) printf("Unlucky Chef");
	else printf("Lucky Chef");
	return 0;
}