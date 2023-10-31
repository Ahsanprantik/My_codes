#include <stdio.h>
double find_avg(double ara[], int n);
int main()
{
    int n, i;
    printf("How many numbers?\t");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    double ara[n];
    for(i=0; i<n; i++)  {
        scanf("%lf", &ara[i]);
    }
    double avg=find_avg(ara, n);
    printf("The average is: %.002lf", avg);
    return 0;
}
double find_avg(double ara[], int n)
{
    double avg, sum=0;
    int i;
    for(i=0; i<n; i++)  {
            sum=sum+ara[i];
        }
    avg=(double)sum/n;
    return avg;
}
