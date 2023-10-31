#include <stdio.h>

int main()
{
    int a[26];
    int i, n, j=0;
    for(i=65, n=0; i<=90; i++, n++){
        a[n]= i;
	}
    char ch[26];
    for(i=0; i<=25; i++){
    ch[i]=a[i];}
    while(j<=25){
    printf("%c", ch[j]);}
    }
