#include <stdio.h>
#include <string.h>
#include <math.h>
int ara_2_num(int ara[], int i, int n)
{
    int num=0;

}
void main()
{
    int i, n;
    char st[8];
    scanf("%s", st);
    n=strlen(st);
    int ara[n];
    for(i=0; i<n; i++)  {
        if(st[i]>='1' && st[i]<='9' && n>1 && n<9)    {
            ara[i]=st[i]-48;
        }
        else {
            printf("Invalid number '0'");
            break;
        }
    }
    for( ; n>i; n--)  {
        num=num+(ara[n]*pow(10, n-i);
    }
}
