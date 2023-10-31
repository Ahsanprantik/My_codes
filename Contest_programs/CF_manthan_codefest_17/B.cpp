#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LLI long long int
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)
#define inf (1e9+100)
#define ifelse(p, pai) pai = p>0 ? p*mx : p*mn

using namespace std;

int find_mx(int a[], int n)
{
    int mx, i;

    mx = 0;
    LP(i, n)
        if(a[i]>=a[mx]) mx = i;

    return a[mx];
}

int find_mn(int a[], int n)
{
    int mn, i;

    mn = 0;
    LP(i, n)
        if(a[i]<=a[mn]) mn = i;

    return a[mn];
}

int main()
{
    int n, p, q, r, i;

    INii(n, p);
    INii(q, r);
    int a[n];
    LLI pai, qaj, rak, mx, mn;

    LP(i, n)    INi(a[i]);

    mx = find_mx(a, n);
    mn = find_mn(a, n);

    ifelse(p, pai);
    ifelse(q, qaj);
    ifelse(r, rak);

    cout<< pai+qaj+rak << endl;

    return 0;
}
