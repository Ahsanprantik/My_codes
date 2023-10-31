#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int T,i;
	long long int s,mid,x;
	scanf("%d",&T);
	long long int output[T][2];
	for(i=0;i<T;i++)
	{
		scanf("%lld",&s);
		x=sqrt(s);
		mid=(x*x+(x+1)*(x+1)+1)/2;
//		printf("%lld\n", x);
		if(x*x==s)
		{
			if(!(x&1))
			{
				output[i][0]=x;
				output[i][1]=1;
			}
			else
			{
				output[i][0]=1;
				output[i][1]=x;
			}
		}
		else if(x%2==0) //even
		{
//			printf("%lld %lld\n",mid,s);			
			if(s>mid)
			{
				output[i][0]=abs(mid+x-s)+1;
				output[i][1]=x+1;
			}
			else
			{
				output[i][0]=x+1;
				output[i][1]=abs(mid-s-x)+1;
			}
		}
		else //odd
		{
//			printf("%lld %lld\n",mid,s);
			if(s>mid)
			{
			 	output[i][1]=abs(mid+x-s)+1;
			 	output[i][0]=x+1;
			}
			else
			{
				output[i][1]=x+1;
				output[i][0]=abs(mid-s-x)+1;
			}
		}
	}
	for (i = 0; i < T;i++)
	{
		printf("Case %d: %lld %lld\n",i+1,output[i][0],output[i][1]);
	}
	return 0;
}
//gcc -o 1008 1008.c -L/path/to/libs -lm
