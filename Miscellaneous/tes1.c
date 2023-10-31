#include <stdio.h>
double pi=3.1416;
void my_fnc()
{
    pi=3.14159265;
    return;
}
int main()
{
    int a=13242525;
    printf("%lf\n", pi);
    my_fnc();
    printf("%lf\n", pi);
    printf("%d", a);
    return 0;
}
