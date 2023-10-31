#include <stdio.h>
#include <windows.h>

void main()
{
    FILE *in, *out;
    in=fopen("Window.txt", "r");
    out=fopen("Window_out.txt", "w");
    int i, c;
    for(i=0; c!=0; i++)  {
        fscanf(in, "%d", &c);
        fprintf(out, "%c", c);
    }
    printf("\nPress 'Esc' to exit.");
    while(getch()!=27)  {}
}
