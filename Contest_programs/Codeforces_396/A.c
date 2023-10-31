#include <stdio.h>
#include <string.h>

#define size 100001
#define MAX(a, b) (a>b ? a:b)

char a[size], b[size];

int main()
{
	int ans, maxl, alen, blen, i, j;
	scanf("%s %s", a, b);

	alen = strlen(a);
	blen = strlen(b);

	maxl = MAX(alen, blen);

	for(i=0; i<maxl; ++i)	{
		if(*(a+i) != *(b+i))	j=0;
		else if
	}
}