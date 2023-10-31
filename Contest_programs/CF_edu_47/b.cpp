#include <bits/stdc++.h>

using namespace std;

void arbit_sort(char *s)
{
    int n = strlen(s);
    int i, j;
    char t;

    for(i=0; i<n-1; i++)    {
        for( ; s[i]-1==s[i+1] && i+1<n; i++)    {
            t = s[i];
            s[i] = s[i+1];
            s[i+1] = t;

            t = s[i];
            for(j=i; t+1==s[j-1] && j-1; j--)
                s[j] = s[j-1];

            s[j] = t;
        }
    }
}

int main()
{
    char nw[100010];

    scanf("%s", nw);

    arbit_sort(nw);

    puts(nw);

    return 0;
}
