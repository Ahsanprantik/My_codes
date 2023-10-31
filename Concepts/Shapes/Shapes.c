#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{
    signed char i;
    for(i=127; i>-83; i--)   {
        printf("\n%d\t%c\n\n", i, i);
    }
}
