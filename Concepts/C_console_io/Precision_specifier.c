#include <stdio.h>

int main(void)
{
    printf("%.4f\n", 123.1234567);
    printf("%.7g\n", 123.1234567);
    printf("%3.8d\n", 1234);
    printf("%10.15s\n", "This is a simple test.");
    printf("%15.15s", "It's a test.");

    return 0;
}
