#include <stdio.h>
#include <time.h>

void main()
{
    int i, c, clk;
    FILE *in;
    in = fopen("Window.txt", "r");
    for(i=0; !c; i++)  {
        clk = clock() + CLOCKS_PER_SEC*10;
        while(clock() < clk);
        fscanf(in, "%d", &c);
        printf("%c", c);
    }
    printf("\nPress 'Esc' to exit.");
    while(getchar()!=27);
}
