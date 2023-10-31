#include <stdio.h>
#include <string.h>

char strng_add(char a[], char b[]){
    int m=strlen(a)+strlen(b);
    char c[m];
    int i, j, n;
    for (i=0; i<strlen(a); i++)
        {
            c[i]= a[i];
        }
    for (j=i, n=0; j<m, n<strlen(b); j++, n++){
            c[j]= b[n];
    }
    return c;
    }
main()
{
    char a[100]= "Bangla" , b[100]= "desh" ;
    char c[100]= strng_add(a, b);
    printf("%s", c );
}
