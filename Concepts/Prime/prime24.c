#include <stdio.h>
#include <math.h>
 void sieve(char ara[], int size)
 {
     int i, j, root, rr;
     root = sqrt(size);
     for(i = 2; i <root; i++) {
         ara[i] = 1;
     }
     rr=sqrt(root);
     for(i = 2; i <=rr; i++) {
         if(ara[i] == 1) {
             for(j=i+i; j <=root; j=j+i) {
                 ara[j] = 0;
             }
         }
     }
 }
 int main()
 {
    int u, m, l;
    scanf("%d", &l);
    scanf("%d", &u);
    char ara[u];
    sieve(ara, u);
    for(m=l; m<u; m++) {
            if(1==ara[m]) {
            printf("%d is a prime number.\n", m);
         }
 }
     return 0;
 }
