#include <stdio.h>
int main()
{
    int m, n, o, p;
    scanf("%d", &m);
    scanf("%d", &n);
    for(o=m-1; o<=20; o=o+1)
    {
        for(p=1; p<=10 ;)
        {
            printf("%d X %d = %d\n", o, p++, o*p);
        }
    }
}
