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

int gcd(int a, int b)
{
    // Everything divides 0 
    if (a == 0 || b == 0)
       return 0;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);

    return gcd(a, b-a);
}

using namespace std;

int ret()
{
	int f, m, s, masha, cs, cm, cf, t;

	INii(f, m);
	INii(s, masha);

	t = s;
	s = cs = max(s, masha);
	masha = min(t, masha);

	if(s>m)	{
		cm = cs+1;
	}
	else cm = m;
	
	if(m>f)	{
		cf = cm+1;
	}
	else cf = f;

	if(2*s<cs || 2*m<cm || 2*f<cf || 2*masha<cs)	return 0;

	printf("%d %d %d\n", cf, cm, cs);

	return 1;
}

int main()
{
	if(!ret())	Oi(-1);

	return 0;
}
