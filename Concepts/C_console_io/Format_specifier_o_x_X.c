#include <stdio.h>

int main()
{
    int num;

    for(num=0; num<256; num++)  {
        printf("%o %x %X\n", num, num, num);
    }

    return 0;
}
