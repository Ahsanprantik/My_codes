#include <stdio.h>
void main()
{
    char ara[100];
    while(NULL!=gets(ara))  {
        printf("%s\n", ara);
    }
}
