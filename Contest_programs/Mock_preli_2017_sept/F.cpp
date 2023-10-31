#include <bits/stdc++.h>
using namespace std;

int whosebig(vector<int> biggy)
{
    int i, mx=0;

    for(i=0; i<biggy.size(); i++)
        mx = max(biggy[i], mx);
    return mx;
}

int main(void)
{
	int list_in[18];
	int y = 0 ;
	int i, j, k, a, big, t, n, m, x, sum;	//x for test case variate
	vector<int> templist_for_big(0);

	scanf("%d", &t);	// input test case
	for(x=1; x<=t; x++)	{
		scanf("%d %d", &n, &m);	// input number of vehicles
		for(i=0; i<n; i++)
            scanf("%d", &list_in[i]);	// input list_in

		for(a=n; a; a--)	{	//this is the while loop you told
			for(i=0; i<a; i--)	{	// a is the last point of list_in
				//k=0;	//possibly
				for(j=0; j<a; j++)	{
				if(list_in[j] % list_in[i])	{
						int k=0;		// eikhane confusion ache
						k++;
					}	// k terminate hoye zabe ekhane………
					if(k>a/2)	{
						templist_for_big.push_back(list_in[i]);	// like ...add
					}
				}
			}
		}


        big = whosebig(templist_for_big);
        y=y+big;

        for(i=0; i<a; i++)	{
            if(list_in[i]%big==0)	{
                list_in[i]  = -1;	// removed
            }
        }

        sum = y/m;
        printf("Case %d: %d\n" , t , sum);
	}

    return 0;
}
