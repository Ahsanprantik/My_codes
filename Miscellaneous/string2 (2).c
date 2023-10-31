#include <stdio.h>
int main()
{
 char *str1="Bangla", *str2="desh";
char str3[11];
 int i, l1=6, l2=4, j;
for( i=0, j=0; i<l1; i++, j++) {
  str3[j]=str1[i];
}
for(i=0; i<l2; i++, j++) {
  str3[j]=str2[i];
}
 str3[j]='\0';
 printf("%s", str3);
}