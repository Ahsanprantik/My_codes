#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

int logic(int A, int B, string c)
{
	char i, a[64], b[64], j=0;
	int ret=0;
	for(i=63; A!=0; i--, A/=2) {
		a[i]=A%2;
	}
	for(i=63; B!=0; i--, B/=2) {
		b[i]=B%2;
	}
	for(i=63; a[i] || b[i]; i--, A/=2) {
		if(c=="AND") a[i]=a[i]*b[i];
		if(c=="OR") a[i]=a[i]+b[i];
		if(c=="XOR") {
			if(a[i]==1 && b[i]==1) a[i]=0;
			else a[i]=a[i]+b[i];
		}
	}
	for(i=63; a[i]; i--)	ret+=pow(2, j++);
	return ret;
}
int main()
{
	int a, b, t, i;
	string c;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++)	{
		scanf("%d", &a);
		cin>>c;
		if(c=="ADD")	ans[i]=a+b;
		else if(c=="DIV")	ans[i]=a/b;
		else if(c=="MUL")	ans[i]=a*b;
		else if(c=="SUB")	ans[i]=a-b;
		else ans[i]=logic(a, b, c);
		}
	for(i=0; i<t; i++)	{
		printf("%d\n", ans[i]);
	}
	return 0;
}