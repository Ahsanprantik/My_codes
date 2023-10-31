#include <stdio.h>

int main()
{
	long long side[3];
	int i, t, j, temp;
	scanf("%d", &t);
	t++;
	char ans[t];
	for(i=1; i<t; i++) {
		temp=0;
		for(j=0; j<3; j++) {
			scanf("%lld", &side[j]);
			if(side[j]>side[temp]) temp=j;
		}
		side[temp]*=side[temp];
		for(j=0; j<3; j++) {
			if(j!=temp) side[temp]-=(side[j]*side[j]);
		}
		ans[i]=!side[temp];
	}
	for(i=1; i<t; i++) {
		if(ans[i]) printf("Case %d: yes\n", i);
		else printf("Case %d: no\n", i);
	}
	return 0;
}
/*
2
36 77 85
40 55 69
*/