//runs fine with g++ but fails with gcc & tcc
#include <stdio.h>
const int a=9999;
int ara[a];
/*GCC & TCC says "Variably modified 'ara' at file scope" :3*/
main()
{
	ara[9998]=7;
	printf("%d", ara[9998]);//runs with G++
}