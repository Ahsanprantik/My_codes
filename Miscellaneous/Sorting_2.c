#include <stdio.h>
int t=0;
void partition(int ara[], int low, int high)
{
    int mid;
    if(low<high)    {
        t++;
        mid=(low+high)/2;
        printf("%d %d--%d\n", low, high, t);
        partition(ara, low, mid);
        printf("%d %d---%d\n", low, high, t);
        partition(ara, mid+1, high);
        printf("%d %d----%d\n", low, high, t);
    }
}

void merging(int ara[], int high, int mid, int low);

void main()
{
    int a[]={71, 55, 65, 52, 63, 56};
    partition(a, 0, 5);
}
