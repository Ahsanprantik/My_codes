#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	int m[n], avg, sum=0, take=0, give=0, floor=0, ceil=0, sec=0;

	for(i=0; i<n; i++)	{
		scanf("%d", &m[i]);
		sum += m[i];
	}
	avg = sum / n;
	for(i=0; i<n; i++)	{
		if(m[i]==avg)	floor++;
		else if(m[i] == (avg+1))	ceil++;
		else if(m[i]<avg)	{
			take += (avg - m[i]);
			floor++;
		}
		else if(m[i]>avg)	{
			give+=m[i]-(avg+1);
			ceil++;
		}
	}
	if(take>give)	{	//All giving servers will gain ceiling amount of tasks.
		if((ceil+give)<take)	sec=give+ceil;
		else sec=take;
	}
	else if(take<give)	{
		if((floor+take)<give)	sec=take+floor;
		else sec=give;
	}
	else sec=give;
	printf("%d\n", sec);
	return 0;
}