/* demo for %g */
#include <stdio.h>

int main()
{
    double f;

    for(f=1.0; f<1.0e+10; f*=10)
        printf("%g ", f);

    for(f=1.0; f>1.0e-10; f/=10)
        printf("%g\n", f);

    return 0;
}
