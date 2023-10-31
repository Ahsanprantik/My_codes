#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i, cnt, max, c;
    scanf("%d", &n);
    char st[n+1], mx[10], *str;
    scanf(" %s", st);
    str = st;

    max = 0;
    while(*str)  {
        for(cnt=1; *str==*(str+1); str++, cnt++) ;
        if(cnt>max) {
            c = 1;
            memset(mx, 0, sizeof(mx));
            mx[*str-'0'] = 1;
            max = cnt;
        }
        else if(max==cnt)   {
            mx[*str-'0'] = 1;
            c++;
        }
        str++;
    }
    printf("%d\n", c);
    for(i=0; i<10; i++){
        if(mx[i])   {
            for(c=0; c<max; c++)    putchar(i+'0');
            putchar('\n');
        }
    }

    return 0;
}
