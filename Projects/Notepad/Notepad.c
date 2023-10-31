#include <stdio.h>
#include <conio.h>

int main()
{
	char c;
	while(1)	{
		c=getch();
		if(c==127) c=8;
		printf("%c", c);
	}
	return 0;
}