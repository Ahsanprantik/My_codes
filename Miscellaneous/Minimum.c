#include <stdio.h>
int find_min(int ara[], int n);
int main()
{
    int n, i;
    printf("How many numbers?\t");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    int ara[n];
    for(i=0; i<n; i++)  {
        scanf("%d", &ara[i]);
    }
    int min=find_min(ara, n);
    printf("The maximum number is: %d", min);
    return 0;
}
int find_min(int ara[], int n)
{
    int min=ara[0];
    int i;
    for(i=1; i<n; i++)  {
        if(ara[i]<min)  {
            min=ara[i];
        }
    }
    return min;
}
