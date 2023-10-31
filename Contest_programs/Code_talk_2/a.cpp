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

int main()
{
	int d1, d2, d3, c;

	INii(d1, d2);
	INi(d3);
	
	if(d1<d2)	{
		c = d1;
		if(min(d3+d2, d3+d3+d1) < d1+d2+d2)
			c += min(d3+d2, d3+d3+d1);
		else c += d1+d2+d2;
	}
	else {
		c = d2;
		if(min(d3+d1, d3+d3+d2) < d2+d1+d1)
			c += min(d3+d1, d3+d3+d2);
		else c += d2+d1+d1;
	}

	Oi(c);

	return 0;
}
