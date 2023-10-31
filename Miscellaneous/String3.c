#include <stdio.h>

int main()
{
    int n=0;
    while(n<=100)    {
        printf("%d%c\n", n, n);
        n++;
    }
    getch();

    return 0;
}
