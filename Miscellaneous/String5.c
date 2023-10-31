#include <stdio.h>
 int main()
 {
     char country[]={'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '.', '\0'};
     int i, length;
     length=25;
     for(i=0; i<=length; i++)   {
        if(country[i]>=65 && country[i]<=90)   {
            country[i]='a'+country[i]-'A';
        }
     }
     printf("%s", country);
 }
