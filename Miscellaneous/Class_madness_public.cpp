#include <iostream>
#include <string>
using namespace std;
string pass="yc2n1z6j";
#define condition public:

class test {
	public:
	int n;
	char ch;
	int gate()	{
		string st;
		cin>>st;
		if(st==pass)	{
			condition
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
	my.n=-2;
	cout<<my.n<<endl;
	cout<<"Enter Password: ";
	my.gate();
	cout<<"Absolute: "<<my.abs(my.n)<<endl;
	cout<<"End"<<endl;
	return 0;
}
