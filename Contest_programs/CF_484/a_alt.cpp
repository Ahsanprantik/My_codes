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
    int n, flag = 0;
    INi(n);
    char seat[n+1], car;
    INs(seat);
    int i;
    car = '2';
    LP(i, n)    {
        if('1'==seat[i])      {
            if(seat[i]==car)    {
                flag = 1;
                break;
            }
        }
        else {
            if(i==n-1)  {
                    if(seat[i-1]=='0')  flag = 1;
            }
            else if(!i) {
                    if(seat[i+1]=='0')  flag = 1;
            }
            else if(seat[i-1]=='0' && seat[i+1]=='0')   flag = 1;

            if(flag == 1)   break;
        }
        car = seat[i];
    }

    if(!flag) puts("Yes");
    else puts("No");

    return 0;
}
