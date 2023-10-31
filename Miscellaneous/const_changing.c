/*Experimenting with constant. Not changeable.*/
#include <stdio.h>

const int a=35;

main()
{
	int i=5+(++a);//GCC can detect this increment though not placed in the left. Some compilers may not notice.
	printf("%d\n", a);
}
//25110116
