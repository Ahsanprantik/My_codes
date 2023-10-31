#include <stdio.h>

int main()
{
    int i, n;
    printf("Multiplication of: ");
    scanf("%d", &n);
    for(i=1; i<=10; i=i+1)    {
        printf("\n%d X %d = %d\n", n, i, n*i);
        }
        printf("\nPress any key");
    getch();

    return 0;
}
