#include <stdio.h>

int kn_in_ch(int i, int j)
{
	int kn;
	kn=i*j;
	if(i==1 || j==1 || kn==4)	return kn;	//Case: 1Xj or iX1 or 2X2. All squares used.
	if(1&kn)	return (kn/2)+1;	//Case:odd.
	if((i==2 || j==2) && kn%8)	return (kn/2)+!(kn%2)+!(kn%4);
	return kn/2;	//Case: All evens except 2X3.
}

int main()
{
	int n, m, k, t;

	scanf("%d", &t);
	while(t--)	{
		scanf("%d %d", &n, &m);
		k = kn_in_ch(n, m);
		printf("%d\n", k);
	}

	return 0;
}