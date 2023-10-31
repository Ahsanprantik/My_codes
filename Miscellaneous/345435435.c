#include <stdio.h>

int main()
{
    int a, b;
    a=3;
    b=1;
    while(a<1001){
        a++;
        while(b<a){
            b++;
            if(a%b!=0)
            {
                printf("%d\n", a);
                }
            }
        }
    getch();
}
