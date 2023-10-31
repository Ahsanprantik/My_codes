#include <stdio.h>
//Unlike concrete mathematics, nested relational operators are valued from left to right by 1 or 0 only
int main()
{
	printf("Case 1: %d\n", 7<3<12);	//(7<3)=0<12
	printf("Case 2: %d\n", 2<3>13<12);	//(((2<3)=1>13)=0<12)
	printf("Case 3: %d\n", 2==2==1);	//(2==2)==1
	printf("Case 4: %d\n", (3<7)*12);	//1*12
	printf("Case 5: %d\n", ((1<3)+(1<2))*12);	//(1+1)*12
	printf("Case 6: %d\n", ((7<3)*13)<12);	//0*13<12
	printf("Case 7: %d\n", ((3<7)*13)<12);	//1*13<12
}