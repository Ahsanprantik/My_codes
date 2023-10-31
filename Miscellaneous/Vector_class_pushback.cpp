#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i;
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for(i=0; i<v.size(); i++)	cout<<v[i]<<endl;
	cout<<i<<endl;
	return 0;
}
