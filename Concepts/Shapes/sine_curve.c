#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	int x, y;
	int a[20][20];
	for(x=0; x<20; x++)	{
		for(y=0; y<20; y++)	{
			a[x][y]=0;
		}
	}
	for(x=0; x<20; x++)	{
		y=(int)(5*(float)cos(x*15));
		a[x][y]=1;
		printf("(%d, %d)\n", x, y);
	}
	for(y=0; y<20; y++)	{
		for(x=0; x<20; x++)	{
			if(a[x][y]==1)	{
				printf("%c", -51);
                Beep(723, 500);
			}
			else {
				printf(" ");
                Beep(0, 10);
			}
		}
		printf("\n");
	}
}
