#include <stdio.h>
int t=0;
void partition(int ara[], int low, int high)
{
    int mid;
    if(low<high)    {
        t++;
        mid=(low+high)/2;
        partition(ara, low, mid);
        partition(ara, mid+1, high);
        printf("%d %d %d----%d\n", low, mid, high, t);
    }
}

void merging(int ara[], int high, int mid, int low);

void main()
{
    int a[]={71, 55, 65, 52, 63, 56};
    partition(a, 0, 5);
}
