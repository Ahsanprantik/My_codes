#include <stdio.h>
//This function shows binary allocation(integer allocation) of a variable up to 64th bit

void showbin(const long long i, int bit)//'i' for variable & 'bit' for bit limit.(1 based index)
{
    unsigned long long temp=1;//Hastle free unsigned! :)

    if(bit>64)  {
        printf("Error: Bit location unaccessable.");
        return;
    }

    bit--;//Because temp is assigned ....00001

    for(temp=temp<<bit; temp!=0; temp=temp>>1)   {
		printf("%d", (temp & i)!=0);//'if' not needed.
    }

    return;
}

void main()
{
    char a=255>>5;
    showbin(a, 65);
}
