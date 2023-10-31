#include <stdio.h>
#define max(x, y) x<y ? y : x

int main(void)
{
	int i, T;
	double v1, v2, v3, a1, a2, d, t, s;

	scanf("%d", &T);

	for(i=1; i<=T; i++)	{
		scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);

		d = (v1*v1)/(a1+a1) + (v2*v2)/(a2+a2);	/*	distance between trains	*/
		t = max(v1/a1, v2/a2);
		s = v3*t;	/*	distance travelled by the bird	*/

		printf("Case %d: %.8f %.8f\n", i, d, s);
	}

	return 0;
}
