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
	int n, k, i, alpha[26] = {0};
	char s[100010];

	INii(n, k);
	INs(s);

	LP(i, n)	{
		alpha[s[i]-'A']++;
	}
	int min = 1000000;
	LP(i, k)
		if(alpha[i]<min)
			min = alpha[i];

	Oi(min*k);

    return 0;
}
