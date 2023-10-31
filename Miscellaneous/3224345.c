#include <stdio.h>
int main()
{
    int a,b=1;
    scanf("%d", &a);
    while(b<a){
        b++;
        if(a%b!=0){
            printf("Prime Number");
            break;
            }
        else{
            printf("Composit Number");
            break;
            }
        }
    getch();
}
