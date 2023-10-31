#include <stdio.h>
#include <stdlib.h>

int moves(void);

int main()
{
	int t, i;
	scanf("%d", &t);
	int ans[t];


	for(i=0; i<t; ++i)	{
		ans[i] = moves();
	}

	for(i=0; i<t; ++i)	{
		if(ans[i]>=0)	printf("Case %d: %d\n", i+1, ans[i]);
		else printf("Case %d: impossible\n", i+1);
	}

	return 0;
}

int moves(void)
{
	int r1, c1, r2, c2;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

	if(r1 == r2 && c1 == c2)	return 0;	/*	Same courted, no move	*/
	if(((r1 + c1) & 1) != ((r2 + c2) & 1))	return -1;	/*	One is black courted,
															one white courted	*/
	if(abs(r1-r2) == abs(c1-c2))	return 1;	/*	Diogonally connected	*/

	return 2;	/*	connected after one move	*/
}