#include <stdio.h>

int main()
{
    int i, n, m;
    printf("Multiplication start: ");
    scanf("%d", &n);
    printf("\nMultiplication stop: ");//bug
    scanf("%d", &m);
    for(; n<=m; n=n+1)   {
        printf("\nMultiplication of %d\n", n);
            for(i=1; i<=10; i=i+1)    {
        printf("\n%d X %d = %d\n", n, i, n*i);
            }
    }
        printf("\nPress any key ");
    getch();

    return 0;
}
