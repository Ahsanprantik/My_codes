#include <iostream>

using namespace std;

template<class R> R absolute(R x)
{
	if(x<0) return -x;
	return x;
}

int main()
{
	cout<<absolute(2)<<endl;
	cout<<absolute(2737.22);
	return 0;
}