#include <stdio.h>

int ara[6];

void f(int i, int j)
{
    if(j==i+1)  {
        int temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
        return;
    }
    else if(i==j)    {return;}
    else {}
}

void main()
{}
