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
	int n, t, i, j, x, y, z;
	char s1[10010], s2[10010];
	char *vow = "aeiou";

	INi(t);

	LP(i, t)	{
		x = y = 0;
		INi(n);
		INs(s1);
		INs(s2);
		LP(j, n)	{
			if(strchr(vow, tolower(s1[j]))!=NULL)
				x++;
			if(strchr(vow, tolower(s2[j]))!=NULL)
				y++;
		}
		if(x>y)	puts("First String");
		else if(x<y) puts("Second String");
		else puts("Equal");
	}
    	return 0;
}
