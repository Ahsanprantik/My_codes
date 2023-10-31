#include <stdio.h>
#include <conio.h>

int main()
{
	int run, req, ball, oponent, over, ch, a;
	float rr, cr;
	printf("Target: ");
	scanf("%d", &oponent);
	while(1)	{
		ball=0;
		printf("Current run: ");
		scanf("%d", &run);
		printf("Current over: ");
		if(scanf("%d %c %d", &over, &ch, &ball)>=1)	{
			ball+=over*6;
			ball=300-ball;
		}//ball remaining korte hobe
		req=oponent-run;
		cr=((float)run/(300.0-ball))*6.0;
		rr=((float)req/ball)*6.0;
		printf("\nC.R: %.2f|R.R: %.2f|Ball rem: %d|Run rem: %d|r_b_dif: %d", cr, rr, ball, req, run-ball);
	}
	return 0;
}