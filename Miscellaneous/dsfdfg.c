#include <stdio.h>

int main()
{
    int a, b, lcm;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    if(a>b){lcm=a-1;}
    else{lcm=b-1;}
    while(a-1<=lcm && b-1<=lcm){
        lcm++;
        if(lcm%a==0 && lcm%b==0)
        {   printf("LCM: %d", lcm);
        break;
        }
    }
    getch();
}
