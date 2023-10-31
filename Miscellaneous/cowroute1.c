#include <stdio.h>
int main()
{
    int A, B, N;
    int i, j, temp;
    scanf("%d %d %d", &A, &B, &N);
    int cost[2N], city, serial[2N], where_is_A[2N], where_is_B;
    for(i=0; i<2N; i++)    {
        scanf("%d %d", &cost[i], city);
        for(j=0; j<city; j++)   {
            scanf("%d", &serial[j]);
            if(serial[j]==A)    {
                where_is_A[i]==j;
            }
            if(serial[j]==B)    {
                where_is_B[i]=j;
            }
        }
        for(j=where_is_A[i]; j<city; j++)   {
            while(1) {
                if(serial[j]==B) {
                    break;
                }
                if(j==city-1)   {
                    j=0;
                }
                if(serial[j]!=B)    {
                }
            }
        }
    }
}
