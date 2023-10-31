#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, k, i, t;
	scanf("%d %d", &n, &k);
	char s[n+1];
	int close[26], grd, open[26];
	scanf(" %s", s);

	memset(close, 0, sizeof(close));
	for(i=n-1; i+1; i++)	{
		t = 'A' - s[i];
		if(!close[t])	close[t] = i;
	}

	for(i=0, grd=1; i<n; i++)	{
		t = 'A' - s[i];
		if(!open[t])	{
			open[t] = i;
			grd++;
		}
		if(close[t]==i)	grd--;
	}

	return 0;
}