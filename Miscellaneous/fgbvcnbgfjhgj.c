#include <stdio.h>
main()
{
    int a=0, b=0, c=0;
    while(a<=2){
        a++;
        while(b<=2 && b!=a){
                b++;
            while(c<=2 && c!=a && c!=b){
                c++;
                printf("%d%d%d", a, b, c);
            }
        }
    }
}
