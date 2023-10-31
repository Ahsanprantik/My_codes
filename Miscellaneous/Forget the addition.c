#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n, i, j, x=0, y=0, s, z;
	char strn[10];
	scanf("%s", strn);
	n=strlen(strn);
	int a[4];
	for(i=0; i<n; i++) {
		a[i]=strn[i]-48;
	}
	if(n%2==0) {
		for(i=0, j=n/2; i<n/2; i++, j++) {
			x=x+a[i]*pow(10, n/2-i-1);
			y=y+a[j]*pow(10, n/2-i-1);
		}
		z=x+y;
	}
		if(n%2==1) {
		for(i=0, j=n/2; j<n; i++, j++) {
			if(i<n/2-1) {
			x=x+a[i]*pow(10, n/2-i-1);
			y=y+a[j]*pow(10, n/2-i);
			}
			else {
			y=y+a[j]*pow(10, n/2-i);
			}
		}
		s=x+y;
		for(i=0, j=n/2; i<=n/2; i++, j++) {
		if(j<n-1) {
			x=x+a[i]*pow(10, n/2-i);
			y=y+a[j]*pow(10, n/2-i-1);
		}
			else {
			x=x+a[i]*pow(10, n/2-i-1);
		}
		}
		z=x+y;
		if(s<z) {
			
		}
}
printf("%d %d %d", z, n, s);
}