#include <stdio.h>

int mod(int x, int y)
{
	if(x>y) return ((2*x)-y);
	else return y;
}
int liftime(int me, int lift)
{
	int time=19;	//constant value
	time+=4*mod(me, lift);
	return time;
}
int main()
{
	int i, t, m, l;
	scanf("%d", &t);
	int ans[++t];
	for(i=1; i<t; i++) {
		scanf("%d %d", &m, &l);
		ans[i]=liftime(m, l);
	}
	for(i=1; i<t; i++) {
		printf("Case %d: %d\n", i, ans[i]);
	}
	return 0;
}
/*
3
1 2
3 10
5 5
*/