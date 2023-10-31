#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<char>v;
	int i;
	while(scanf("%d", &i)==1)	{
		v.push_back(i);
	}
	for(i=0; i<v.size(); i++)	{
		printf("%d\n", v[i]);
	}
	return 0;
}