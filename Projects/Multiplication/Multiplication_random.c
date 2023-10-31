#include<stdio.h>
int main()
{
	int a[]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, score=0, b;
	int i, c, d, k, n;
	printf("How many numbers you want to multiply?\t");
	scanf("%d", &k);
	if(k>9)	{
		printf("Not enough stock. Try these 10 numbers:\n");
		k=9;
	}
	for(i=0; i<k; i++) {
		printf("\nWrite the multiplication of %d: (0 to skip)\n", a[i]);
		for(b=1; b<=10; b++)	{
		n=0;
		while(n<2) {
			n++;
			printf("%dX%d=", a[i], b);
			scanf("%d", &c);
			if(c==0)	{
				break;
			}
			if(c==a[i]*b) {
                score++;
				break;
			}
			else {
				printf("Try again.\n");
			}
		if(n==2) {
			printf("Its done for you.\n");
			printf("%dX%d=%d\nTry next one.\n", a[i], b, a[i]*b);
	}
	}
	if(c==0)	{
				break;
			}
	}
	}
    printf("Your score %d/%d", score, k*10);
	return 0;
}