verview
Problem
Status
Rank (05:00:00)
0 Discuss
SettingFavoriteClone
Previous12345…NextFilterReset
Username

Prob
	Result 
	Time
(ms)	Mem
(MB)	Lang 
	Submit Time
rezaulhsagar
G
Wrong answer on test 1
C++
10 days ago
rezaulhsagar
G
Wrong answer on test 1
C++
10 days ago
Ahsan_prantik
G
Runtime error on test 1
C++
21 days ago
theintel
G
Accepted
31	2	
C
23 days ago
theintel
G
Compilation error
C
23 days ago
HHmoon
G
Accepted
15	2	
C
23 days ago
prime_003
G
Wrong answer on test 4
C++
24 days ago
prime_003
G
Wrong answer on test 1
C++
24 days ago
pulak
G
Accepted
546	53.4	
C++
24 days ago
prime_003
G
Wrong answer on test 4
C++
24 days ago
prime_003
G
Wrong answer on test 4
C++
24 days ago
HHmoon
G
Memory limit exceeded on test 1
C
24 days ago
MSwadhin
G
Wrong answer on test 12
C++
24 days ago
MSwadhin
G
Wrong answer on test 12
C++
24 days ago
Zayed
G
Accepted
15	2	
C++
24 days ago
Zayed
G
Wrong answer on test 1
C++
24 days ago
Rashidul15
G
Accepted
46	2	
C
24 days ago
DU_Bottles
G
Wrong answer on test 1
C
24 days ago
DU_Bottles
G
Wrong answer on test 1
C
24 days ago
DU_Bottles
G
Wrong answer on test 1
C
24 days ago
 Go to top
FAQ | About | Google Group | Discuss | Author 
All Copyright Reserved ©2010-2017 Xu Han 
Server Time: 2017-03-05 18:24:12 BST
Feedback
   
#8128430 Ahsan_prantik's solution for [Gym-101243G] [Problem G]
Status
Runtime error on test 1
Time
62ms
Memory
12072kB
Length
922
Lang
GNU G++ 5.1.0
Submitted
2017-02-12 20:31:42
Shared

RemoteRunId
24610704
Select Code
#include <stdio.h>
#include <math.h>

#define LIM 10467397

char num[LIM+1];

void sieve(void)
{
	int i, j, l;
	
	l = sqrt(LIM);
	num[0] = 1;
	num[1] = 1;
	
	for(i=2; i<=l; ++i)	{
		if(!num[i])
			for(j=i+i; j<=LIM; j+=i)	num[j] = 1;
	}
}

int find(void)
{
	int n, cblim, lim2, i, temp, j, c;
	scanf("%d", &n);

	cblim = cbrt(n);

	i = 2;

	if(!(n%i))	{
		temp = n/i;
		lim2 = sqrt(temp);
		for(j=i+1; j<=lim2; j+=2)	{
			if(!num[j])
				if(!(temp%j))	{
					c = temp/j;
					if(!num[c] && c>j)	return 1;
				}
		}
	}
	
	i++;
	for( ; i<=cblim; i+=2)	{
		if(!num[i] && !(n%i))	{
			temp = n/i;
			lim2 = sqrt(temp);
			for(j=i+2; j<=lim2; j+=2)	{
				if(!num[j])
					if(!(temp%j))	{
						c = temp/j;
						if(!num[c] && c>j)	return 1;
					}
			}
		}
	}

	return 0;
}

int main()
{
	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	sieve();
	if(find()) printf("YES");
	else printf("NO");

	return 0;
}