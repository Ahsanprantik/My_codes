#include <stdio.h>
#include <windows.h>

void main()
{
    FILE *in;
    in=fopen("Input_star.txt", "r");
    int i;
    char ch[10000];
    fgets(ch, 1000, in);
    for(i=0; getch()!=27; i++)  {
        Beep(0, 20);
        printf("%c", ch[i]);
    }
    while(getch()!=27)  {}
}
