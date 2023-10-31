#include <stdio.h>

int next_num(int num);

int main()
{
	int n, t, i;
	scanf("%d", &t);
	int ans[t];
	for(i=0; i<t; i++)	{
		scanf("%d", &n);
		ans[i]=next_num(n);
	}
	for(i=0; i<t; i++)	{
		printf("Case %d: %d\n", i+1, ans[i]);
	}

	return 0;
}

int next_num(const int num)
{
	unsigned int temp=1;
	int nxt_num=num;
	int trail_bits;
	while(!(temp & nxt_num))	temp<<=1;
	trail_bits=0;
	while(temp & nxt_num)	{
		trail_bits++;	//counting trailing bits
		nxt_num&=~temp;	//clearing trailing bits
		temp<<=1;
	}
	trail_bits--;	//excluding the last one from the series
	nxt_num+=temp;	//setting a bit after the series
	temp=1;
	while(trail_bits--)	{
		nxt_num+=temp;
		temp<<=1;
	}
	return nxt_num;
}
