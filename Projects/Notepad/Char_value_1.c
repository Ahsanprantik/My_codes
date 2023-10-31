#include <stdio.h>

int main()
{
    int c;
    while(1)    {
        c=getchar();
        if(c!=10) printf("%d\n", c);
    }
}
