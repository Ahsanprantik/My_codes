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

void tcase(void)
{
    char dialogue[3][2][101] = {
    "Quill", "I am going to ask you this one time, where is Gamora?",
    "Stark", "I will do you one better, who is Gamora?",
    "Drax", "I will do you one better, why is Gamora?"
    };

    int i = 3;
    char tmp[101];
    INs(tmp);
    while(i--)  {
        if(!strcmp(tmp, dialogue[i][0]))    {
            puts(dialogue[i][1]);
            return;
        }
    }
    puts("What is Gamora?");
}

int main()
{
    int t;
    INi(t);

    while(t--)  tcase();

    return 0;
}
