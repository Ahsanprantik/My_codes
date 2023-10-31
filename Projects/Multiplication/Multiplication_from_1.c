#include<stdio.h>
int main()
{
	int a, score=0, b, sk=0, w=1;
	int i, c, d, k, n;
	printf("Multiply upto: \t");
	scanf("%d", &k);
	printf("First one is done for you:\n");
	for(a=1; a<=k; a++) {
			if(a!=1)	{
		printf("\nWrite the multiplication of %d: (0 to skip.)\n", a);
			}
		for(b=1; b<=10; b++)	{
		n=0;
		while(n<2) {
			n++;
			printf("%dX%d=", a, b);
			if(a!=1)	{
			w=scanf("%d", &c);
			
			if(w==0)	{
				printf("\nInvalid number.");
				n--;
	}
			}
			if(w==1)	{
			if(a==1) {
				c=b;
				printf("%d\n", c);
			}
			if(c==0)	{
				break;
			}
			if(c==a*b) {
				if(a!=1)	{
                score++;
				}
				break;
			}
			else {
				if(n==1)	{
				printf("Try again.\n");
				}
			}
		if(n==2) {
			printf("Okay. Its done for you.\n");
			if(a!=k)	{
				printf("%dX%d=%d\nTry next one.\n", a, b, a*b);
			}
	}
	if(c==0)	{
		sk+=10-b-1;
				break;
			}
	}
	}
	}
	}
    printf("Your score %d/%d", score, (k-1-sk)*10);
	return 0;
}