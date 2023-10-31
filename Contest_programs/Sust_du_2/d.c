#include <stdio.h>

int main(void)
{
    char map[2][2] =
    {
        'A', 'n',
        'B', 'y'
    };
    if(getchar()=='A')
        putchar(map[0][1]);
    else putchar(map[1][1]);

    return 0;
}
