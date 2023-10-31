#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, neu[4], dif_max[4], unrec=0, max=0, sum=0, j;
	scanf("%d", &n);
	char gene[n], neu_c[4]="ACGT";
	memset(neu, 0, sizeof(neu));
	scanf(" %s", gene);
	for(i=0; i<n; i++)	{
		if(gene[i]==neu_c[0]) neu[0]++;
		else if(gene[i]==neu_c[1]) neu[1]++;
		else if(gene[i]==neu_c[2]) neu[2]++;
		else if(gene[i]==neu_c[3]) neu[3]++;
		else unrec++;
	}

	for(i=0; i<4; i++)	{
		if(neu[i]>max) max=neu[i];
	}
	for(i=0; i<4; i++)	{
		dif_max[i]=max-neu[i];
		sum+=dif_max[i];
	}
	if(unrec>sum)	{
		if((unrec-sum)%4)	{
			printf("===\n");
			return 0;
		}
		else {
			for(i=0; i<4; i++) dif_max[i]+=(unrec-sum)/4;
		}
	}
	else if(unrec<sum)	{
		printf("===\n");
		return 0;
	}
	for(i=0; i<n; i++)	{
		if(gene[i]=='?')	{
			for(j=3; (j+1) && !dif_max[j]; j--);
			if(j+1)	{
				dif_max[j]--;
				gene[i]=neu_c[j];
			}
		}
	}
	printf("%s\n", gene);
	return 0;
}