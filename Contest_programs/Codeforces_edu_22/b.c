#include <bits/stdc++.h>

using namespace std;

long long int max_dist(long long int ara[])
{
	int i, j;
	long long int temp, max=0;

	for(i=1; ara[i]!=-1; i++)	{
		j = i-1;
		temp = ara[i];
		while(j+1 && temp<ara[j])	{
			ara[j+1] = ara[j];
			j--;
		}
		ara[j+1] = temp;
	}

	for(i=1; ara[i]!=-1; i++)
		if(ara[i]-ara[i-1]-1>max)	max = ara[i]-ara[i-1]-1;

	return max;
}

int main()
{
	long long int x, y, l, r, mx, my, s, ara[5000], max;
	int c;
	cin >> x >> y >> l >> r;

	ara[0] = l-1;
	c = 1;
	for(mx=1; mx<=r; mx*=x)	{
		for(my=1; ; my*=y)	{
			s = mx + my;
			if(l<=s && s<=r)	{
				ara[c] = s;
				c++;
			}
			if(s>r)	break;
		}
	}
	ara[c]=r+1, ara[c+1] = -1;
	max = max_dist(ara);
	cout<<max<<endl;

	return 0;
}