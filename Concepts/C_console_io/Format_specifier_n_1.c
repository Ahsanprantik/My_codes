#include <stdio.h>

int main()
{
    int count;

    printf("This%n", &count);
    printf(" is a test\n");
    printf("%d", count);

    return 0;
}
