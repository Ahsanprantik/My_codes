#include <stdio.h>

int main()
{
	int d, ans;
	char c;
	scanf("%c%d", &c, &d);
	ans=('a'<c)+(c<'h')+(1<d)+(d<8);
	if(ans==2) ans++;
	else if(ans==3) ans+=2;
	else ans+=4;
	printf("%d\n", ans);
	return 0;
}
	