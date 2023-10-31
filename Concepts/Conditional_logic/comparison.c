#include <stdio.h>

int main()
{
    int a, b,c;
    int num1, num2;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        num1=a;
        num2=b;
    }
    else
    {   num1=b;
        num2=a;
    }
    if(c>num1)
    {
        printf("%d>%d>%d", c, num1, num2);
    }
    else
    {   if(c>num2)
        {   printf("%d>%d>%d", num1, c, num2);
        }
        else
        {   printf("%d>%d>%d", num1, num2, c);
        }
    getch();
    }
}
