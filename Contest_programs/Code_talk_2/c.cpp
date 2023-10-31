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
	int n, q, a, i, j;

	INi(n);
	LLI ara[n], cnt = 0;

	LP(i, n)	{
		INi(a);
		cnt += a;
		ara[i] = cnt;
	}

	INi(q);

	while(q--)	{
		INii(i, j);
		if(i)	cnt = ara[j]-ara[i-1];
		else cnt = ara[j];
		cout<<cnt<<endl;
	}


    return 0;
}
