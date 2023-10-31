#include <stdio.h>

int main()
{
	int t, n, m, u, v;
	scanf("%d", &t);
	
	while(t--)	{
		scanf("%d %d", &n, &m);
		while(m--)	scanf("%d %d", &u, &v);
		if(1&n)	printf("no\n");
		else printf("yes\n");
	}
	
	return 0;
}