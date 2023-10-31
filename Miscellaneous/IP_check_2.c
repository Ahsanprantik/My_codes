#include <stdio.h>
//Input problem.....
int main()
{
	int t, i, dec[4], bcd[4], j, k;
	char bin[4][8];
	scanf("%d\n", &t);
	char ans[++t];
	for(i=1; i<t; i++) {
		ans[i]=1;
		scanf("%d.%d.%d.%d\n", &dec[0], &dec[1], &dec[2], &dec[3]);
/*!Bug*/  scanf("%s.%s.%s.%s\n", bin[0], bin[1], bin[2], bin[3]);
//		printf("\n%s|%s|%s|%s\n", bin[0], bin[1], bin[2], bin[3]);
		for(j=0; j<4; j++) {
			bcd[j]=0;
			for(k=7; k>=0; k--) {
				if(bin[j][k]=='1') {
					bcd[j]+=1<<(7-k);
//					printf("\n%d\n", k);
				}
			}
//			printf("\nFinal: %d %d\n", dec[j], bcd[j]);
			if(bcd[j]!=dec[j]) {
				ans[i]=0;
				break;
			}	
		}
	}
	for(i=1; i<t; i++) {
		printf("Case %d: ", i);
		if(ans[i]) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
/*
2
192.168.0.100
11000000.10101000.00000000.11001000
65.254.63.122
01000001.11111110.00111111.01111010
*/