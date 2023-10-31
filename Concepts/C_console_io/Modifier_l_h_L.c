#include <stdio.h>

int main(void)
{
    printf("long int : %.7lu\n", 1234567);
    printf("short int: %7hu\n", 1234567);
    printf("%.17Lf", 30000.100002000006);

    return 0;
}
