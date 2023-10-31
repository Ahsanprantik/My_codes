#include <stdio.h>
#include <math.h>

int logic(int A, int B, int c)
{
	int i, a[64], b[64];
	for(i=63; A!=0; i--, A/=2) {
		a[i]=A%2;
	}
	for(i=63; B!=0; i--, B/=2) {
		b[i]=B%2;
	}
	for(i=63; !a[i] && !b[i]; i--, A/=2) {
		if(c=='&') a[i]=a[i]*b[i];
		if(c=='|') a[i]=a[i]+b[i];
		if(c=='x') {
			if(a[i]==1 && b[i]==1) a[i]=0;
			else a[i]=a[i]+b[i];
		}
	}