#include <stdio.h>
#include <math.h>

int main()
{
	double x[3], y[3], temp=0, area;
	int i;
	for(i=0; i<3; i++)	{
		scanf("%lf %lf", &x[i], &y[i]);
        x[i]=(double)x[i];
        y[i]=(double)y[i];
	}
	for(i=0; i<3; i++)	{
		if(i==2)	{
			temp+=x[i]*y[0]-y[i]*x[0];
		}
		else {
			temp+=x[i]*y[i+1]-y[i]*x[i+1];
		}
	}
		if(temp<0)	{
			temp*=-1;
		}
	area=0.5*temp;
	printf("%.2lf", area);
	 return 0;
}
