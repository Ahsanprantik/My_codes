/*  This program produces a table of squares
    and cubes of the numbers from 1 to 19   */
#include <stdio.h>

int main(void)
{
    int i;

    /*  display a table of squares and cubes    */
    for(i=1; i<20; i++)
        printf("%8d %8d %8d\n", i, i*i, i*i*i);

    return 0;
}
