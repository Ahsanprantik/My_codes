#include <stdio.h>
#include <mylib.h>
#include <windows.h>

void main()
{
	int tone[]={256, 288, 320, 341, 384, 427, 480, 512};
	int i, t;
	char name[]="CDEFGABC";
	scanf("%d", &t);
	for(i=0; i<8; i++)	{
		printf("%c ", name[i]);
		Beep(tone[i], t);
	}
	for(i=7; i>=0; i--)	{
		printf("%c ", name[i]);
		Beep(tone[i], t);
	}
	while(1)	{
		i=getch();
		if(i==27)	break;
		if(i=='c')	{
			printf("\n");
			scanf("%d", &t);
		}
		i-='0';
		if(i>=0 && i<=7)	{
			printf("%c ", name[i]);
			Beep(tone[i], t);
		}
	}
}
