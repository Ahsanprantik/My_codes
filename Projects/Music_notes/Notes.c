#include <stdio.h>
#include <windows.h>

void main()
{
    char c;
    while(1)    {
        c=getch();
        if(c==27) break;
        if(c=='0') Beep(23, 500);
        if(c=='1') Beep(123, 500);
        if(c=='2') Beep(223, 500);
        if(c=='3') Beep(323, 500);
        if(c=='4') Beep(423, 500);
        if(c=='5') Beep(523, 500);
        if(c=='6') Beep(623, 500);
        if(c=='7') Beep(723, 500);
    }
}
