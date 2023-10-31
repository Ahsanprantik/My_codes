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
    char names[5][11] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    char prob[101], *tmp;
    int i, cnt;
    INs(prob);
    cnt = 0;

    for(i=0; i<5; i++)  {
        if(tmp = strstr(prob, names[i]))    {
            cnt++;
            tmp++;
            if(strstr(tmp, names[i]))   cnt++;
        }
    }
    if(cnt == 1)    puts("YES");
    else puts("NO");

    return 0;
}
