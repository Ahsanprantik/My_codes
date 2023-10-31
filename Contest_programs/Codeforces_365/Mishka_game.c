#include <stdio.h>

int main()
{
	int n, i, mi, ci, mish=0, chris=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)	{
		scanf("%d %d", &mi, &ci);
		if(mi<ci) chris++;
		else if(mi>ci)	mish++;
	}
	if(mish>chris)	printf("Mishka\n");
	else if(chris>mish)	printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	return 0;
}
