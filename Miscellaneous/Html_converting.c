#include <stdio.h>
#include <string.h>
int main()
{
    FILE *op, *inp;
    inp=fopen("html1.txt", "r");
    op=fopen("html1.html", "w");
    char ara[100], i=0, ch[]="</html>";
    printf("%s\n", ch);
    while(1)    {
        fgets(ara, 100, inp);
        fputs(ara, op);
        printf("%s\n", ara);
        if(strcmp(ara, ch)==1)  {
            printf("%s\n", ch);
            break;
        }
    }
}
