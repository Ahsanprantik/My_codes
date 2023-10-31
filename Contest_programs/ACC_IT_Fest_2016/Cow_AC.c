#include <stdio.h>

int main()
{
    long long j;
    int c, i, k;
    scanf("%d", &c);
    int cow[++c], nloop[c];
    j=0;
    for(i=1; i<c; i++) {
        scanf("%d", &cow[i]);
        if(!cow[i]) nloop[++j]=i;
    }
    for(i=1; i<=j; i++) {
        for(k=1; k<c; k++) {
            if(cow[k]==nloop[i]) nloop[++j]=k;
        }
    }
    printf("%d\n", j);
}
