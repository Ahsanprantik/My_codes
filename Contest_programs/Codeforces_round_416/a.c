#include <stdio.h>

int main()
{
    int a, b, i;

    scanf("%d %d", &a, &b);

    for(i=1; 1; i++) {
        if(i&1) {
            a-=i;
            if(a<0) break;
        }
        else {
            b-=i;
            if(b<0) break;
        }
    }

    if(a<0) printf("Vladik\n");
    else printf("Valera\n");

    return 0;
}
