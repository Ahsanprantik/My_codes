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
	int t, n, i, j, k, l, found;

	INi(t);
	
	LP(i, t)	{
		INi(n);
		found = 0;
		for(j=1; j<n/2; j++)	{
			for(k=j+1; j%3!=0 && k<n/2; k++)	{
				l = n-(j+k);
				if(l%3!=0 && k%3!=0 && j+k+l==n)	{
					found = 1;
					break;
				}
				if(l<=k) break;
				if(found)	break;
			}
			if(found)	break;
		}
		if(found)	{
			Os("YES");
			printf("%d %d %d\n", j, k, l);
		}
		else Os("NO");
	}

    return 0;
}