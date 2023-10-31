#include <stdio.h>

int main(void)
{
    printf("%10.4f\n", 1234567892402.4563);
    printf("%10.4f\n", 12345678.924024563); /*  greater than 10 character  */
    printf("%10.4f", 123.45678924024563);   /*  less than 10 character  */

    return 0;
}
