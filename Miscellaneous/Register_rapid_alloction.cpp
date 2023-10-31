#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void register_allocation()
{
	register char reg_var;
	register void *pointer;
	pointer=&reg_var;
	cout<<pointer<<endl;
	Beep(1000, 500);
	return;
}

int main()
{
	while(getch()!=27)	register_allocation();

	return 0;
}
