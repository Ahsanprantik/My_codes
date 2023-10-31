#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d%*c%d", &x, &y);
    printf("%d %d\n", x, y);

    scanf(" %c%*d%c", &x, &y);
    printf("%c %c\n", x, y);

    return 0;
}
