#include <stdio.h>
#define len 1000

int car[len], c[len], clr, x, y, max;

int fn(int i, int st)
{
	if(car[i]==-1)	{
		if(y==1)	{
			x=1;
			i=0;
		}
		else {
			printf("return 0;--%d\n", i);
			return 0;
		}
	}
	int take1;
	if(c[i]!=clr)	{
		if(st+c[i]<4)	{
			if(c[i]!=0)	{
				clr=c[i];
			}
			take1=car[i]+fn(i+1, st+c[i]);
		printf("take1=car[i]+fn(i+1,st+c[i]);--%d\n", i);
		}
		else {
			y=1;
			take1=0;
			printf("take1=0;\n");
			}
	}
	else {
			take1=car[i]+fn(i+1, st);
			printf("take1=car[i]+fn(i+1, st);%d\n", i);
	}
	if(x==0)	{
		int take2=fn(i+1, c[i]);
		printf("take2=fn(i+1, c[i]);--%d\n", i);
		if(take2>max)	{
			max=take2;
		}
	}
	return take1;
}

int main()
{
	int i, j, k, l, t, ret;
	char str[len];
	scanf("%d", &t);
	int ans[t];
	for(l=0; l<t; l++)	{
		clr=-1;
		x=0;
		y=0;
		max=0;
		scanf("%s", str);
		for(i=0, j=0, k=0; str[i]!='\0'; k++)	{
			for( ; str[j]==str[++j]; )	{}
			if(str[i]=='w')	{
				c[k]=0;
			}
			if(str[i]=='r')	{
				c[k]=1;
			}
			if(str[i]=='b')	{
				c[k]=2;
			}
			car[k]=j-i;
			i=j;
		}
		car[k]=-1;
		ret=fn(0, 0);
		if(max<ret)	{
			max=ret;
		}
		ans[l]=max;
	}
	for(l=0; l<t; l++)	{
		printf("%d\n", ans[l]);
	}
	return 0;
}