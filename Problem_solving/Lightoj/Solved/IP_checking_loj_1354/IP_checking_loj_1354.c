#include <stdio.h>
#include <string.h>
#include <math.h>

int dec_bin_cmp(const char *dec, const char *bin)
{
	int i, j, k, exp, ind;
	unsigned char num[2];
	j=strlen(dec);
	for(i=4; i>0; i--) {
		num[0]=0;
		exp=0;
		while(j>0 && dec[--j]!='.')	{
			num[0]+=((int)pow(10, exp)*(dec[j]-'0'));
			exp++;
		}
		num[1]=0;
		for(k=0, ind=i*9-1; k<8; k++) {
			ind--;
			if(bin[ind]=='1') num[1]+=1<<k;
		}
		if(num[0]!=num[1]) return 0;
	}
	return 1;
}

int main()
{
	char dec[16], bin[36];
	int i, t;
	scanf("%d", &t);
	char ans[++t];
	for(i=1; i<t; i++) {
		scanf("%s", dec);
		scanf("%s", bin);
		ans[i]=dec_bin_cmp(dec, bin);
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