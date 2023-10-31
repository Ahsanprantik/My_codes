#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char c;
    printf("Bangladesh");
    while(1)    {
        c=getch();
        putch(c);
        if(c=='\b')	{
			putch(' ');
			putch('\b');
        }
    }
}
