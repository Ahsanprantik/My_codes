#include <stdio.h>

int main()
{
    int n, i;
    printf("Start: \n");
    scanf("%d", &n);
    printf("End: \n");
    scanf("%d", &i);
    while(n<i)    {
        n=n+1;
        if(n%2==0)  {
            continue;
        }
        printf("%d\n", n);
    }
    getch();

    return 0;
}
