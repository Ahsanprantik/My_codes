#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	printf("%s\nTest_char: e=%c\nSize: %i", s.c_str(), s[1], s.size());
	return 0;
}