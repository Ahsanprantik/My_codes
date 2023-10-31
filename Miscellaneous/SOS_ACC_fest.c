#include <stdio.h>

int main()
{
	int i=0, j, count=0;
	char str[100], *sos="SOS";
	scanf("%s", str);
	while(str[i]) {
		for(j=0; j<3; j++, i++) {
			if(str[i]!=sos[j]) count++;
		}
	}
	printf("%d", count);
	return 0;
}