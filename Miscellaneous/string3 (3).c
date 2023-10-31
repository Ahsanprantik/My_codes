#include <stdio.h>
int main()
{
 char str1[]="Bangla", str2[]="desh";
char str3[12];
 int i, l1=6, l2=4;
for(i=0; i<l1; i++) {
  str3[i]=str1[i];
}
for(i=0; i<l2; i++) {
  str3[i+l1]=str2[i];
}
 printf("%s", str3);
}