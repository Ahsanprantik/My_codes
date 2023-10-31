#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

typedef long long int LLI;

using namespace std;

int main()
{
    int n, m, i, j, tmp;

    INii(n, m);
    int pos[n], seg[m][2], seg_indx[m];

    LP(i, m)    INii(seg[i][0], seg[i][1]);

    LP(i, m-1)    {
        j = i;
        tmp = j+1;
        while(j+1 && seg[seg_indx[tmp]][1]-seg[seg_indx[tmp]][0] < seg[seg_indx[j]][1]-seg[seg_indx[j]][0]) {
            seg_indx[j+1] = seg_indx[j];
            j--;
        }
        seg_indx[j+1] = tmp;
    }

    LP(i, m)    {

    }

    return 0;
}
