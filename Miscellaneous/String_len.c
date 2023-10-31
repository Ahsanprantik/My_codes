#include <stdio.h>
int str_len(char string[])
{
    int length=0;
    while(string[length]!='\0')  {
        length++;
    }
    return length;
}
void main()
{
    char string[100], i;
    while(1==scanf("%s", string))   {
    i=str_len(string);
    printf("%d\n", i);
    }
}
