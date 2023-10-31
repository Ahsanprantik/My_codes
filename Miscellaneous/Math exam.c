#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;
    printf("1st term marks: ");
    scanf("%d", &ft_marks);
    printf("2nd term marks: ");
    scanf("%d", &st_marks);
    printf("Final exam marks: ");
    scanf("%d", &final_marks);
    total_marks=ft_marks/4.0+st_marks/4.0+final_marks/2.0;
    printf("%0.2lf\n", total_marks);
    return 0;
}
