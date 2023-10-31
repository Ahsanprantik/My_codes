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
	int n, m, i, j, a_i, a_j, cnt;

	INii(n, m);
	char ch;

	a_i = a_j = 0;
	LP1_(i, n)	{
		getchar();
		LP1_(j, m)	{
			ch = getchar();
			if(ch=='B')	{
				if(!a_i && !a_j)	{
					a_i = i;
					a_j = j;
					cnt = 1;
				}
				else if(i==a_i)	{
					cnt++;
				}
			}
		}
	}

	if(cnt&1)	{
		a_i += cnt/2;
		a_j += cnt/2;
	}

	Oii(a_i, a_j);


	return 0;
}
