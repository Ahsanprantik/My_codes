#include <stdio.h>

int main(void)
{
    printf("This line will be wiped\r");
    printf("This line won't be wiped\n");
    printf("Here goes a page break\n\f");
    printf("This is a new page\n");

    return 0;

}
