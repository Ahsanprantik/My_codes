#include <stdio.h>

/*
INPUT: ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/

int main(void)
{
    char str[80], str2[80];

    scanf("%20s", str);
    scanf("%s", str2);

    printf("%s %s\n", str, str2);

    return 0;
}
