#include <stdio.h>

int main(void)
{
    char str[10];

    scanf("%s", str);

    while(*str)   {
        putchar(*str);
        putchar('\n');
        str++;
    }

    return 0;
}
