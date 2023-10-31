#include <stdio.h>

void main()
{
    FILE *in;
    in=fopen("Input_star.txt", "r");
    int i;
    char ch[10000];
    fgets(ch, 1000, in);
    for(i=0; ch[i]!='|'; i++)  {
        printf("%c", ch[i]);
    }
}
