#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int j, num[2], exp=0;
	char *bin="11000000.10101000.00000000.11001000";
	num[1]=0;
		for(k=0, ind=i*9-1; k<8; k++) {
			ind--;
			if(bin[ind]=='1') num[1]+=1<<k;
		}
	printf("%d", num[1]);
}