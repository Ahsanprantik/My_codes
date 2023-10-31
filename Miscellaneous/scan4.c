#include <stdio.h>

int main()
{
    int x, y;
    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("Please enter another number: ");
    scanf("%d", &y);
    printf("%d+%d=%d\n", x, y , x+y);
    printf("%d-%d=%d\n", x, y , x-y);
    printf("%d*%d=%d\n", x, y , x*y);
    printf("%d/%d=%d\n", x, y , x/y);
    printf("Average of %d and %d=%d\n", x, y , (x+y)/2);

    return 0;
}
