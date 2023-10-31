#include <stdio.h>

int main()
{
	int n, k, ans, m;
	scanf("%d %d", &n, &k);	/* n=total fish,
								k=fish fried at a time */

	m = n%k;	/* m=remaining fishes after frying
					fishes full pan, with no gap.  */

	ans = ((n/k) + !(!m)) * 2;	/* frying time without
									any trick */

	if(m && m<=(k/2))	ans--;	/* when remaining fishes 'm' fills
									less than or equal to half of
									the frying pan, one second
									can be saved. */

	printf("%d", ans);

	return 0;
}