 #include <stdio.h>
 int sring_length(char str[]){
    int length,i;
    for(i=0; i>0; i++){
        if(str[i]!='\0'){
            length++;
        }
        else{break;}
        }
    return length;
 }
 int main()
 {
     char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
     int i, length;
     printf("%s\n", country);
     length =sring_length(country) ;
     for(i = 0; i < length; i++) {
         if(country[i] >= 97 && country[i] <= 122) {
             country[i] = 'A' + (country[i] - 'a');
         }
     }
     printf("%s\n", country);
 }
