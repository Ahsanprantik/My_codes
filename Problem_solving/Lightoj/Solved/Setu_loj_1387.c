#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, dnt, sum[100][100], s, k;
	char cmd[6];
	scanf("%d", &t);//test case
	for(i=0; i<t; i++) {
		scanf("%d", &j);//number of commands
		for(s=0, k=0; j>0; j--) {
			scanf("%s", cmd);//commands
			if(strcmp(cmd, "donate")==0) {
				scanf("%d", &dnt);//donation ammount
				s+=dnt;
			}
			else if(strcmp(cmd, "report")==0)
				sum[i][k++]=s;
		}
		sum[i][k]=-1;
	}
	
	for(i=0; i<t; i++) {
		printf("Case %d:\n", i+1);
		for(j=0; sum[i][j]!=-1; j++) {
			printf("%d\n", sum[i][j]);
		}
	}
	return 0;
}