#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
	int freq=500;
	char c=0;
	while(c!='0')	{
		if(c=='+')	freq+=100;
		if(c=='-')	freq-=100;
		Beep(freq, 500);
		c=getch();
	}

}
