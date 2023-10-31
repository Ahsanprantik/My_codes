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

char ara[7] = "aouie";

using namespace std;

int is_vowel(char ch)
{
    int i;

    LP(i, strlen(ara))
        if(ch == ara[i])    return 1;

    return 0;
}

int main()
{
    char s[110];
    int i;

    INs(s);

    for(i=0; s[i]; i++) {
        if(!is_vowel(s[i]) && (!is_vowel(s[i+1]) || !s[i]))  {
            if(s[i]!='n') {
                puts("NO");
                exit(0);
            }
        }
    }
    puts("YES");

    return 0;
}
