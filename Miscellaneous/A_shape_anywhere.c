#include <stdio.h>
#include <conio.h>
// 2 17 || 3 9
int main()
{
	int i, j, sp_w, sp_h, car, mid;
	scanf("%d %d", &sp_h, &sp_w);
	clrscr();
	sp_w*=2;
	sp_h++;
	sp_w--;
	car=sp_w+16;
	mid=car/2;
	while(sp_h--) printf("\n");
	for(i=0; i<8; i++)	{
		for(j=0; j<car; j++)	{
			if(i==0 && j==mid) {
			 printf("^");//this line forces off elifs
			 break;
			}
			else if(j==(mid-i))
			 printf("/");
			else if(j==(mid+i))	{
			 printf("\\");
			 break;
			}
			else if(i==3 && (j>(mid-i) && j<(mid+i)))
			 printf("_");
			else printf(" ");
		}
		printf("\n");
	}
}