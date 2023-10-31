#include <stdio.h>

int main()
{
    long long a, m, l;
    scanf("%lld", &a);
    m=a%3;
    l=a/3;
    if(!m) printf("%lld\n", l*l*l);
    else if(m==1) printf("%lld\n", l*l*(l+1));
    else printf("%lld\n", l*(l+1)*(l+1));
    return 0;
}
