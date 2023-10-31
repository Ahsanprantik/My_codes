#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	char code[n], ans[n+1];
	scanf("%s", code);
	if(n&1)	{
		j=n/2;
		k=1;
	}
	else {
		j=(n/2)-1;
		k=-1;
	}
	for(i=0; i<n; i++)	{
		j+=(k*i);
		ans[j]=code[i];
		//printf("%d\n", j);	//tester
		k=-k;
	}
	ans[n]='\0';
	printf("%s\n", ans);
	//printf("%s\n", code);	//tester
	return 0;
}