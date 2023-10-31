#include <stdio.h>

int main()
{
	int n, m, bw, pix;
	char p;
	bw=1;
	scanf("%d %d ", &n, &m);
	pix=n*m;
	while(pix--)	{
		scanf("%c ", &p);
		if(bw)	{
			if(p=='C' || p=='M' || p=='Y')	bw=0;
		}
	}
	if(bw)	printf("#Black&White\n");
	else printf("#Color\n");
	return 0;
}