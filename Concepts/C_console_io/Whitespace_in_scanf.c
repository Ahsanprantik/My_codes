#include <stdio.h>

/*
input:  April 30
        2018
*/

int main(void)
{
    char str[80], str2[80];
    int num;

    scanf("%s ", str);
    scanf("%s ", str2);
    printf("%s %s\n", str, str2);   /*  buffered by input    */
    scanf("%d", &num);

    printf("%s %s %d\n", str, str2, num);

    return 0;
}
