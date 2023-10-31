#include <stdio.h>

int main()
{
	int p, q, n, i, t, j;
	scanf("%d %d %d", &n, &p, &q);
	char str[n+1];
	scanf(" %s", str);

	if(n==p || n==q)	{
		printf("1\n%s\n", str);
	}
	else if(!(n%(p+q)))	{
		t=(n/(p+q))*(!(!p) + !(!q));
		printf("%d\n", t);
		for(i=0; i<n; ++i)	{
			printf("%c", str[i]);
			j=(i+1)%(p+q);
			if(j == p || !j)	printf("\n");
		}
	}
	else printf("-1\n");

	return 0;
}