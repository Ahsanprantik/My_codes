#include <stdio.h>
void main()
{
    int a[]={71, 55, 65, 52, 63, 56}, i, j, carry;
    for(i=5; i>0; i--)  {
        for(j=0; j<i; j++)  {
            if(a[j+1]<a[j]) {
                carry=a[j];
                a[j]=a[j+1];
                a[j+1]=carry;
            }
            printf("\n{%d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5]);
        }
        printf("\n");
        printf("\n{%d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    }
    printf("\n{%d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5]);
}
