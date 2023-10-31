#include <stdio.h>

int arnd(int n, int r)
{
	if(n>=r)	return n-r;
	else return n;
}

int kfind(char *s, char c)
{
	int i;
	for(i=0; s[i]!=c; i++);

	return i;
}

int main(void)
{
	int n, r, f, prt;
	char st, end;

	char clk[] = "v<^>", cntclk[] = "v>^<";

	scanf("%c %c %d", &st, &end, &n);
	
	r = n%4;
	f = kfind(clk, st) + r;
	f = arnd(f, 4);
	prt = 0;

	if(clk[f]==end)	prt++;

	f = kfind(cntclk, st) + r;
	f = arnd(f, 4);

	if(cntclk[f]==end)	prt--;

	if(prt>0)	printf("cw\n");
	else if(prt<0)	printf("ccw\n");
	else printf("undefined\n");

	return 0;
}