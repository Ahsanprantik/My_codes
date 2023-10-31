#include <stdio.h>

int main()
{
	int n, i, a, tmp, m;
	scanf("%d", &n);
	m=0, a=0;

	for(i=0; i<n; i++)	{
		scanf("%d", &tmp);
		if(m)	m--;
		else {
			m=tmp;
			a++;
		}
	}
	printf("%d\n", a);

	return 0;
}