#include <stdio.h>
struct info{
	double y, s, v, f;
}

struct info func(double yy, )
{
	y=(double)y;
	return y*(365.0*24.0*60.0*60.0);
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
	scanf("%lf %lf", &yy, &dist);
	ss=yy_ss(yy);//this variable should be used for better runtime
	printf("\nTime: %lf sec\nVelocity: %lf m/sec", ss, time_dis_vel(ss, dist));
	return 0;
}