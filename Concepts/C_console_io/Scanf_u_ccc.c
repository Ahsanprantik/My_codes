#include <stdio.h>

int main(void)
{
    unsigned int unum;
    char a, b, c;

    scanf("%c%c%c", &a, &b, &c);
    scanf("%u", &unum);
    printf("%c<%c>%c\n", a, b, c);
    printf("%u\n", unum);

    return 0;
}
