#include<stdio.h>
void main()
{
	int a[]={12, 28, 25, 45, 8, 56, 14, 18, 20, 26}, score=0;
	int b[]={3, 7, 5, 9, 2, 7, 2, 6, 5, 2};
	int i, c, d, n;
	printf("Enter 0 to skip.\n");
	for(i=0; i<10; i++) {
		n=0;
		while(n<3) {
			n++;
			printf("%d)%d(", b[i], a[i]);
			scanf("%d", &c);
			if(c==0)	{
				break;
			}
			printf("  %d\n------\n  ", a[i]);
            d=a[i]%b[i];
			printf("%d\n", d);
			if(c==a[i]/b[i]) {
				if(n==1)	{
				printf("Excellent!!!\n\n");
				}
				if(n==2)	{
					printf("Very good!!\n\n");
				}
				if(n==3)	{
					printf("Good!\n\n");
				}
                score++;
				break;
			}
			else {
				printf("Try again.\n");
			}
		if(n==3) {
			printf("\nIts done for you.\n");
			printf("%d)%d(%d\n  %d\n-----\n  %d\nTry next one.\n\n", b[i], a[i], a[i]/b[i],  (a[i]/b[i])*b[i],  a[i]%b[i]);
	}
	}
	if(c==0)	{
		break;
	}
	}
    printf("Your score %d/10", score);
    if(score==10)	{
		printf("\nYou are a genious!");
    }
    return;
}
