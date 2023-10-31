#include <stdio.h>

int main()
{
    char number[1000], number_inverse[1000];
    scanf("%s", number);
    int k, n, i, j=strlen(number);
    for( i=j, n=0 ; n<j, i>=0; i--, n++ ){
        number[n]= number_inverse[i];
    }
    for(k=0 ; k<=j; k++){
    if(number[k]=!number_inverse[k]){
        printf("Not Burger");
        break;
    }
    else if(number[k]==number_inverse[k]){
        continue;
    }
    if(k==j-1){
        printf("Burger");
    }
}
    printf("%s", number_inverse);
}
