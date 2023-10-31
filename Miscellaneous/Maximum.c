#include <stdio.h>
int find_max(int ara[], int n);
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
    int max=find_max(ara, n);
    printf("The maximum number is: %d", max);
    return 0;
}
int find_max(int ara[], int n)
{
    int max=ara[0];
    int i;
    for(i=1; i<n; i++)  {
        if(ara[i]>max)  {
            max=ara[i];
        }
    }
    return max;
}
