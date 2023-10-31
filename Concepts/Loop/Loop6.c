    #include <stdio.h>

int main()
{
    int n, i;
    printf("Start: ");
    scanf("%d", &n);
    printf("End: ");
    scanf("%d", &i);
    while(n<i){
        n++;
        if(n%2==0)
        {
            continue;
        }
    printf("%d\n", n);
    }
    getch();

    return 0;
}
