    #include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i=1;
    while(i<=10)    {
        printf("%d X %d = %d\n", n, i, n*i);
        i=i+1;
    }
    getch();

    return 0;
}
