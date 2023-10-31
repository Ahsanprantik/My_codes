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

void tcase(void);

int main()
{
    int t;
    INi(t);

    while(t--)  tcase();

    return 0;
}

void tcase(void)
{
    int n, j, tmp;
    INii(n, j);
    int keso[n], dgm[n];

    int i, k=0, d=0;
    LP1_(i, n)  {
        INi(tmp);
        if(tmp>j)   keso[k++] = i;
        else dgm[d++] = i;
    }

    puts("Kache Eso");
    if(!k)  {
        puts("");
    }
    else {
        LP(i, k-1)    printf("%d ", keso[i]);
        printf("%d\n", keso[i]);
    }


    puts("Dure Giya Mor");
    if(!d)  {
        puts("");
    }
    else {
        LP(i, d-1)    printf("%d ", dgm[i]);
        printf("%d\n", dgm[i]);
    }

    return;
}
