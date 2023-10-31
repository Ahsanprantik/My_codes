#include <stdio.h>

int main()
{
    int n, k, pg, ans, probs, j, l;
    scanf("%d %d", &n, &k);
    pg=0;
    ans=0;
    while(n--) {
        scanf("%d", &probs);
        pg++;
        for(j=1, l=1; j<=probs; j++, l++) {
            if(l>k) l=1; pg++;
            if(j==pg) ans++;
        }
        printf("%d\n", pg);
        if(pg<=probs) ans++;
    }
    printf("%d", ans);
    return 0;
}
