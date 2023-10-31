 #include <stdio.h>
 int main()
 {
    char country[]={'B', 'a','n'};
    int length=3, i;
    for (i=0; i<length; i++ ){
        if(country[i]>=97 && country[i]<=122){
         country[i]='A'+(country[i]-'a');
        }
    }
    printf("%s", country);
 }
