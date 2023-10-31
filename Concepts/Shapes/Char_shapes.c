#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void main()
{
    char i;
    int c;
    for(c=120; c<256; c++)    {
        i=c;
        printf("%c\t%d\n", i, i);
        getch();
    }
}
