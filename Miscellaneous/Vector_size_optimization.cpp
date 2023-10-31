#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<char>v;
	int s=v.max_size()*.1;
	cout<<"v.max_size()= "<<v.max_size()<<endl;
	cout<<"Trying to initialize for: "<<s<<endl;
	v.resize(s-1);
	cout<<"v.size()= "<<v.size();
	return 0;
}
