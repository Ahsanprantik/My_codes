#include <stdio.h>
int main()
{
    int a[3], b[3], t, i, j, temp;
    scanf("%d", &t);
    int ans[t];
    for(i=0; i<t; i++)  {
        for(j=0; j<3; j++)  {
            scanf("%d", &a[j]);
        }
        for(j=0; j<3; j++)  {
            scanf("%d", &b[j]);
        }
        if(a[0]>a[1]) {
            temp=a[1];
            a[1]=a[0];
            a[0]=temp;
        }
        if(a[0]>a[2]) {
            temp=a[2];
            a[2]=a[0];
            a[0]=temp;
        }
        if(b[0]>b[1]) {
            temp=b[1];
            b[1]=b[0];
            b[0]=temp;
        }
        if(b[0]>b[2]) {
            temp=b[2];
            b[2]=b[0];
            b[0]=temp;
        }
        if(a[0]<b[0])   {
            for(j=1; j<3; j++)  {
                if(a[j]>=b[j])   {
                    ans[i]=-1;
                    break;
                }
                else {
                    ans[i]=0;
                }
            }
        }
        if(a[0]>b[0])   {
            for(j=1; j<3; j++)  {
                if(a[j]<=b[j])   {
                    ans[i]=-1;
                    break;
                }
                else {
                    ans[i]=1;
                }
            }
        }
    }
    for(i=0; i<t; i++)  {
        printf("Case %d: ", i+1);
        if(ans[i]==0)    {
            printf("1st box fits into 2nd box\n");
        }
        else if(ans[i]==1)  {
            printf("2nd box fits into 1st box\n");
        }
        else {
            printf("Does not fit in any order\n");
        }
    }

    return 0;
}
