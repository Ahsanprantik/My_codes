#include <stdio.h>

int main()
{
    int a, *p;

    p = &a;

    printf("The number of words written so far is %n", p);  /*  function returned   */
    printf("%d", a);
    puts("");

    return 0;
}
