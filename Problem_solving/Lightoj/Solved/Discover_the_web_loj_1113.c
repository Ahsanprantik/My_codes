#include <stdio.h>
#include <string.h>

int main()
{
	char cmd[7], url[101][50];
	int i, t, j, pos, k;
	scanf("%d", &t);
	char ans[++t][101][50];
	memset(ans, 0, sizeof(ans));
	for(i=1; i<t; i++) {
		pos=0;
		j=0;
		cmd[0]=0;
		memset(url, 0, sizeof(url));
		strcpy(url[0], "http://www.lightoj.com/");
		for(k=0; 1; k++) {
			scanf("%s", cmd);
			if(cmd[0]=='Q') break;

			else if(cmd[0]=='V') {
				for( ; j>pos; j--)	memset(url[j], 0, sizeof(url[j]));	//Emptying forward
				scanf("%s", url[++j]);
				pos++;
			}

			else if(cmd[0]=='B') {
				if(pos) pos--;
				else {
					strcpy(ans[i][k], "Ignored");
					continue;	//error loading
				}
			}
			
			else if(cmd[0]='F') {
				if(pos<j) pos++;
				else {
					strcpy(ans[i][k], "Ignored");
					continue;	//error loading
				}
			}
			strcpy(ans[i][k], url[pos]);
		}

	}

	for(i=1; i<t; i++) {
		printf("Case %d:\n", i);
		for(k=0; ans[i][k][0]; k++) {
			printf("%s\n", ans[i][k]);
		}
	}
	return 0;
}
/*
1
VISIT http://uva.onlinejudge.org/
VISIT http://topcoder.com/
BACK
BACK
BACK
FORWARD
VISIT http://acm.sgu.ru/
BACK
BACK
FORWARD
FORWARD
FORWARD
QUIT
*/