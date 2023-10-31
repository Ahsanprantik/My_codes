#include <stdio.h>
#include <windows.h>

void main()
{
    FILE *in;
    in=fopen("Input_tst_shape.txt", "r");
    int i, c;
    for(i=0; c!=0; i++)  { //0 in the txt file
        Beep(0, 20);
        fscanf(in, "%d", &c);
        printf("%c", c);
    }
    while(getch()!=27)  {}
}
