#include <stdio.h>
#include <string.h>
int main()
{
   char str[1002], word[100], is_word_started=0;
   int i, n, j;
   gets(str);
   n=strlen(str);
   for(i=0, j=0; i<n; i++)   {
    if(str[i]>='a' && str[i]<='z')  {
        if(is_word_started==0)  {
            is_word_started=1;
            word[j]=str[i]+'A'-'a';
            j++;
        }
        else if(is_word_started==1) {
            word[j]=str[i];
            j++;
        }
    }
    else if(str[i]>='A' && str[i]<='Z') {
        if(is_word_started==0)  {
            is_word_started=1;
        }
        word[j]=str[i];
        j++;
    }k=mo]
   }
}
