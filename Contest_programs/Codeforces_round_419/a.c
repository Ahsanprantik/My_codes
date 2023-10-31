#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int hp, mp, ans;
	char in[6], pal[6];

	scanf("%s", in);

	strcpy(pal, in);
	in[2] = '\0';
	pal[2] = '\0';

	if(pal[1]>pal[3])	{
		if(pal[1]>'5')	{
			pal[1] = '0';
			pal[0]++;
		}
		pal[3] = pal[1];
		pal[4] = pal[0];
	}
	else if(pal[1]==pal[3] && pal[0]>=pal[4])
		pal[4] = pal[0];
	else if(atoi(pal)==23)	{
		pal[0] = '2';
		pal[1] = '4';
		pal[3] = '0';
		pal[4] = '0';
	}
	else {
		pal[1]++;
		pal[3] = pal[1];
		pal[4] = pal[0];
	}
	hp = atoi(pal)-atoi(in);
	mp = atoi(&pal[3])-atoi(&in[3]);

	ans = hp*60 + mp;

	printf("%d\n", ans);

	return 0;
}