#include <stdio.h>

int main(void)
{
    int ox, oy, ax, ay, bx, by;
    long long int d2;
    int t, i;
    double ans;

    scanf("%d", &t);

    for(i=1; i<=t; i++) {
        scanf("%d %d %d %d %d %d", &ox, &oy, &ax, &ay, &bx, &by);

        d2 = ((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
        ans = sqrt(d2) * acos(1 - (double)((bx-ax)*(bx-ax) + (by-ay)*(by-ay))/(2*d2));

        printf("Case %d: %.8f\n", i, ans);
    }

    return 0;
}
