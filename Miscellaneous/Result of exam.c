#include <stdio.h>

int main()
{
    int i, n;
    printf("Total students: ");
    scanf("%d", &n);
    int ft_marks[n], st_marks[n], final_marks[n];
    double total_marks[n];
    printf("\nEnter the marks:\n\tRoll:\t1st term:\n");
    for(i=1; i<=n; i++) {
        printf("\t%d.\t", i);
        scanf("%d", &ft_marks[i-1]);
    }
    printf("\nEnter the marks:\n\tRoll:\t2nd term:\n");
    for(i=1; i<=n; i++) {
        printf("\t%d.\t", i);
        scanf("%d", &st_marks[i-1]);
    }
    printf("\nEnter the marks:\n\tRoll:\tFinal term:\n");
    for(i=1; i<=n; i++) {
        printf("\t%d.\t", i);
        scanf("%d", &final_marks[i-1]);
    }
    printf("\nFinal result:\n\tRoll:\tTotal marks:\n");
    for(i=1; i<=n; i++)  {
        total_marks[i-1]=ft_marks[i-1]/4.0+st_marks[i-1]/4.0+final_marks[i-1]/2.0;
        printf("\t%d\t%0.01lf\n", i, total_marks[i-1]);
    }
    getch();
}
