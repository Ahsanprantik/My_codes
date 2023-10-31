#include <stdio.h>

int main(void)
{
    int num;
    char str[80], str2[80];

    /*  input 123abcABC+tye */
    scanf("%d%[a-zA-Z]%s", &num, str, str2);
    printf("%d %s %s\n", num, str, str2);

    return 0;
}
