#include <stdio.h>

double yy_ss(double y)
{
	y=(double)y;
	return y*(double)(365.0*24.0*60.0*60.0);
}
double time_dis_vel(double s, double dis)
/*time in sec & distance in meter*/
{
	s=(double)s;
	dis=(double)dis;
	return dis/s;
}
int main()
{
	double yy, dist, ss;
	printf("Distance(km)\t: ");
	scanf("%lf", &yy);
	printf("Time(Year)\t: ");
	scanf("%lf", &dist);
	ss=yy_ss(yy);//this variable should be used for better runtime
	printf("\nTime: %lf sec\nVelocity: %lf km/sec", ss, time_dis_vel(ss, dist));
	return 0;
}
