#include <stdio.h>

int main()
{
    int ft_marks[40]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
    59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
    82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40]={86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
    86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
    69, 67, 53, 56, 71, 62, 49},
    final_marks[40]={87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
    69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
    55, 69, 85, 81, 80, 67, 88, 71};
    double total_marks[40];
    int sum, n, i, a[40], x[100];
    for(i=0; i<40; i++) {
    total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    printf("Roll No: %d\tTotal marks: %0.02lf\n", i+1, total_marks[i]);
    }
    printf("\nMarks:\tStudent count:\n");
    for(i=0; i<40; i++) {
    if(total_marks[i]-(int)total_marks[i]>=0.5)  {
        a[i]=(int)total_marks[i]+1;
    }
    else {
        a[i]=(int)total_marks[i];
    }
    }
    for(i=0; i<=100; i++) {
        x[i]=0;
    }
    for(i=0; i<40; i++)   {
        x[a[i]]++;
        }
    for(i=50; i<101; i++) {
        if(x[i]!=0) {
        printf("%d\t%d\n", i, x[i]);
        }
    }
    getch();
    return 0;
}
