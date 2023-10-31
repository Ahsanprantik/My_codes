#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<char>myvar(10);
	cout<<myvar.max_size()<<endl;
	myvar[0]=1;
	myvar.resize(15);
	myvar[14]=2;
	cout<<myvar[0]<<endl<<endl<<myvar[14]<<endl <<myvar.size();
	
	return 0;
}