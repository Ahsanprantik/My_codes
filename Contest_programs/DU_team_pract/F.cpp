#include <bits/stdc++.h>

#define INi(x) scanf("%d", &x)
#define INii(x, y) scanf("%d %d", &x, &y)
#define Oi(x) printf("%d\n", x)
#define Oii(x, y) printf("%d %d\n", x, y)
#define OCSi(c, x) printf("Case %d: %d\n", c, x)
#define Os(s) printf("%s\n", s)
#define OCSs(c, s) printf("Case %d: %s\n", c, s)
#define INs(s) scanf(" %s", s)
#define LP(i, end) for(i=0; i<end; i++)
#define LP1_(i, end) for(i=1; i<=end; i++)

typedef long long int LLI;  /*  list for interest */

using namespace std;

/*  function for calculating the 'd' as stated in the problem  */
int calc(char *diry)
{
    int cnt[26], alt, mxi, i, index; /*   array 'cnt[]' is counter for 26 letters of alphabet
                                        (e.g. cnt[0] for counting 'A' */

    memset(cnt, 0, sizeof(cnt));    /*  set all of array a[] to 0   */

    for(i=0; diry[i]!='\0'; i++) {
        index = diry[i]-'A';   /*  character converted to alphabet index(e.g. 'A'-'A' = 0, 'B'-'A'=1,....) */
        if(diry[i]!=' ')   cnt[index]++; /*  increment of cnt[index] character by one times    */
    }

    mxi = 0, alt = 0;   /*   initial 0 satisfies the loop   */
    for(i=0; i<26; i++)   {
        if(cnt[i]>cnt[mxi]) {    /*  if count of i th char is greater than the count of mxi th char */
            mxi = i;	/*	then replace mxi by i	*/
            alt = 0;   /*  current maximum character has no alternative */
        }
        else if(cnt[i]==cnt[mxi] && i)
            alt = 1;   /*  maximum character has alternative    */
    }
    /*  now mxi holds the index of the highest existing character
        and alt tells if it has alternative or not    */

    if(alt)    return -1;  /* if(alt!=0) actual maximum character has alternative and 'E' is not determinable */

    /*  calculating the character shift value (the 'd')   */
    if(mxi<4)
        return mxi-4 + 26; /*  for mxi<4, it will be negative, +26 for positive
                            it signifies that encryption has rotated 'E'(4th char) to mxith character  */

    else return mxi-4;  /*  character is shifted but no rotation    */
}

/*  Decryption process  */
void dcrpt(char *s, int d)
{
    int i;
    for(i=0; s[i]!='\0'; i++)   {
        if(s[i]!=' ') {
            s[i] -= d;  /*  decrease by 'd' */
			if(s[i]<'A')
				s[i] += 26;  /*  decrement have crossed lower bound('A')  */
        }
    }
    /*  void needs no return    */
}

int main()
{
    int c, d;
    char diry[1010]; /*  diary :P   */

    scanf("%d", &c);    /*  c defined in problem    */
    getchar();  /*  extra enter after inputting 'c' */

    while(c--)  {   /*  c times */
        gets(diry);  /*  library function for a full line input   */

        d = calc(diry);  /*  calling user defined function calc(char *)(see calc(char *)
                            return value saved in 'd'   */

        if(d!=-1)   {   /*  -1 for alternative exist, means NOT POSSIBLE   */

            dcrpt(diry, d);  /*  decrypt the string according to '-d' formula */
            printf("%d %s\n", d, diry);
        }
        else puts("NOT POSSIBLE");  /*  d==-1   */
    }

    return 0;
}
