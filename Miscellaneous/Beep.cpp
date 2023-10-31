#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int i, c;
    for(i=1000; ; ) {
            cout<<i<<endl;
        Beep(i, 1000);
        c=getch();
        if(c=='0')  i-=1;
        if(c=='1')   i-=10;
        if(c=='2')   i-=100;
        if(c=='3')   i-=1000;
    }
}
