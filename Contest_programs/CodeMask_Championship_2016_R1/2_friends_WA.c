#include <stdio.h>

int main()
{
	int t, i, n;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++) {
		scanf("%d", &ans[i]);
	}
	
	for(i=0; i<t; i++) {
		if(ans[i]==1  || ans[i]==2)
			printf("Case %d: Tie\n", i+1);
		else if(ans[i]%2==0)
			printf("Case %d: CodeMask\n", i+1);
		else 
			printf("Case %d: CodeForces\n", i+1);
	}
	return 0;
}