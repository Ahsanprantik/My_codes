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
#define INF 1000000001

typedef long long int LLI;

using namespace std;

int main()
{
	int t, n, j, k, i, p, notif, alpha[26] = {0};
	char s[100010];

	INi(t);
	
	LP(i, t)	{
		INii(n, p);
		int a[n], b[n];
		LP(j, n)	INi(a[j]);
		LP(j, n)	INi(b[j]);
		int notif = 0, cost = 0;
		while(notif<n)	{
			int min = p * n, min_i = 0;
			notif++;
			cost += p;
			LP(j, n)	{
				if(p + a[j] * b[j] < min)	{
					min = b[j];
					min_i = j;
				}
			}
			if(notif < n)	{
				if(min < p)	{
					notif += a[min_i];
					cost += b[min_i] * a[min_i];
					b[min_i] = INF;
					min = p;
				}
				else {
					cost += p * (n-notif);
					notif = n;
				}
			}
		}
		Oi(cost);
	}

    return 0;
}