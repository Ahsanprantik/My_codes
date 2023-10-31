#include <stdio.h>

int adj(int i)
{
	if(i>3)	return i-4;
	else return i;
}
int main()
{
	int lite[4][4], ped[4], pd[4];
	int l, s, r, p, i;

	for(i=0; i<4; i++)
		ped[i] = 0;
	
	for(i=0; i<4; i++)	{
		scanf("%d %d %d %d", &l, &s, &r, &p);
		ped[adj(i+3)] += l;
		ped[adj(i+2)] += s;
		ped[adj(i+1)] += r;
		pd[i] = p;
		if(l+s+r)	ped[i] = 1;
	}

	for(i=0; i<4; i++)
		if(ped[i] && pd[i])	break;
	
	if(i<4)	printf("YES\n");
	else printf("NO\n");

	return 0;
}