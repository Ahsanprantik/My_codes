#include <stdio.h>

int main()
{
	int k, n, a, b, i, j;
	scanf("%d %d %d %d", &n, &k, &a, &b);
	char ans[n+1];
	if(a==b)	{
		for(i=0; i<n; i++)	{
			if(i&1)	ans[i]='b';
			else ans[i]='g';
		}
	}
	else if(a>b)	{
		j=0;
		while(a && b)	{
			for(i=0; i<k && a; i++, a--)	{
				ans[j++]='g';
			}
			ans[j++]='b';
			b--;
		}
		for(i=0; i<k && a; i++, a--)	{
			ans[j++]='g';
		}
		for(i=0; i<k && b; i++, b--)	{
			ans[j++]='b';
		}
		ans[j]='\0';
		if(a)	printf("No\n");
		else printf("%s\n", ans);
	}
	else if(b>a)	{
		j=0;
		while(a && b)	{
			for(i=0; i<k && b; i++, b--)	{
				ans[j++]='b';
			}
			ans[j++]='g';
			a--;
		}
		for(i=0; i<k && b; i++, b--)	{
			ans[j++]='b';
		}
		for(i=0; i<k && a; i++, a--)	{
			ans[j++]='g';
		}
		ans[j]='\0';
		if(b) printf("No\n");
		else printf("%s\n", ans);
	}
	return 0;
}