#include <stdio.h>

int main(void)
{
    printf("%f %#f\n", .2, .2);
    printf("%x %#x\n", 10, 10);
    printf("%*.*f\n", 10, 4, 1234.34);

    return 0;
}
