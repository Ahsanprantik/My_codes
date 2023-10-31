#include <stdio.h>
int main()
{
    int r,s,t;
    for(r=1; r<=20; r=r+1)
    {
        for(s=1; s<=10; s=s+1)
        {
            for(t=r; t<=200; t=2*r)
            {
                printf("%d X %d = %d\n", r,s,t);
            }
         }
    }
}
