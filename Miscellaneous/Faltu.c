#include <stdio.h>

int main()
{
	int a[3][2], i, car=0;
	for(i=0; i<3; i++)	{
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
		if(a[1][0]+a[2][0]<=a[0][0])	{
			if(a[1][1]+a[2][1]<=a[0][1])	{
				printf("YES");
				return 0;
			}
		}
		if(a[1][0]+a[2][0]<=a[0][1])	{
			if(a[1][1]+a[2][1]<=a[0][0])	{
				printf("YES");
				return 0;
			}
		}
		if(a[1][1]+a[2][0]<=a[0][0])	{
			if(a[1][0]+a[2][1]<=a[0][1])	{
				printf("YES");
				return 0;
			}
		}
		if(a[1][1]+a[2][0]<=a[0][1])	{
			if(a[1][0]+a[2][1]<=a[0][0])	{
				printf("YES");
				return 0;
			}
		}
		printf("NO");
		return 0;
}