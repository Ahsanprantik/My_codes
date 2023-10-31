#include <stdio.h>
int str_len(char string[])
{
    int length=0;
    while(string[length]!='\0')  {
        length++;
    }
    return length;
}
int str_comp(char str1[], char str2[])
{
    int i, x=str_len(str1), y=str_len(str2);
    if(x>y) {
        return 1;
    }
    if(x<y) {
        return -1;
    }
    if(x==y)    {
        for(i=0; str1[i]!='\0' && str2[i]!='\0'; i++)   {
            if(str1[i]>str2[i]) {
                return 1;
            }
            if(str1[i]<str2[i]) {
                return -1;
            }
        }
        return 0;
    }
}
void main()
{
    char string1[]="cb", string2[]="ba";
    int i;
    i=str_comp(string1, string2);
    printf("%d\n", i);
}
