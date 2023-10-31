#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) != EOF){
        int d;
        d = (a+b+c+abs(a-c-b))/3;
        printf("%d",d);

    }
    return 0;
}
