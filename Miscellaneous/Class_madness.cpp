#include <iostream>
#include <string>
using namespace std;
string pass="yc2n1z6j";

class test {
	public:
	int n;
	char ch;
	int gate()	{
		string st;
		cin>>st;
		if(st==pass)	{
			return 1;
		}
		return 0;
	}
	template <class T> T abs(T x) {
		if(x<0) return -x;
		return x;
	}
};

int main()
{
	class test my;
	cout<<"Enter Password: ";
	if(my.gate()==0) return 0;
	cin>>my.n;
	cout<<"Absolute: "<<my.abs(my.n)<<endl;
	cout<<"End"<<endl;
	return 0;
}