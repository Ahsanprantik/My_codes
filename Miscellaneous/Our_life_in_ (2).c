#include <life.h>
void our_life(int me, const int public_uni_seat, int some_people)
{
	if(public_uni_seat<me) {
	 for( ; some_people; ) //some_people!=Parents
		me='NULL';		//NULL character

	 for( ; me; me--) printf("What is life? :'( .....\n");
	}
	return; //belasheshe....
}
int main() {
	int I;
	our_life(I);
}