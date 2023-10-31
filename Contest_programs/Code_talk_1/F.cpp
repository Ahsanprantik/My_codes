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
	char n[1000], i, j;
	int ans;

	while(1)	{
		INs(n);
		ans = 0;

		if(n[0]=='0')	break;
		i = strlen(n);
		for(j=0; j<i; j++)	{
			if(n[i]!='0')	{
				ans += (n[i-j-1]-'0') * ((1<<(j+1)) - 1);
			}
		}
		Oi(ans);
	}
	
	return 0;
}
