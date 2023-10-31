#include <stdio.h>
void main()
{
    int i,t;
    long long int a;
    scanf("%d", &t);
    char ver[t];
    for(i=0; i<t; i++)  {
        ver[i]=0;
        scanf("%lld", &a);
        if(a%10!=0) {
            if(a%3==0)  {
                ver[i]+=3;
            }
            if(a%5==0)    {
                ver[i]+=5;
            }
        }
        else {
            ver[i]=-1;
        }
    }
    for(i=0; i<t; i++)  {
        if(ver[i]==3)   {
            printf("Case %d: Fizz", i+1);
        }
        if(ver[i]==5)   {
            printf("Case %d: Buzz", i+1);
        }
        if(ver[i]==8)   {
            printf("Case %d: FizzBuzz", i+1);
        }
        if(ver[i]==0)   {
            printf("Case %d: Null", i+1);
        }
        if(ver[i]==-1)   {
            printf("Case %d: ", i+1);
        }
        printf("\n");
    }
}
