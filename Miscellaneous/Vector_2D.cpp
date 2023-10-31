#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector <int> >v;
	int i, j;
    for(i=0; i<2; i++)  {
		for(j=0; j<2; j++)  {
			v[i][j]=1;
			cout<<v[i][j]<<"\t";
            }
		cout<<endl;
    }
	cout<<v.size()<<endl;
	return 0;
}
