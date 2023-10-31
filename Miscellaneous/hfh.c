#include <stdio.h>

int highest(int ara[], int i){
    int h=, j;
    for(j=0; j<i; j++){
        if(ara[j]<h){
            h=ara[j];
        }
    }
return h;
}
main()
{
    int ara[]={1,2,3};
    int n= 3;
    int c=highest(ara, n);
    printf("%d", c);
}
