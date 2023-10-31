#include <stdio.h>

int main(void)
{
    int i;
    char s1[1010], s2[1010], alpha1[26], alpha2[26];
    scanf(" %s %s", s1, s2);

    for(i=0; s1[i]; i++)   {
        if(s1[i]>'Z') alpha1[s1[i]-'a'] = s2[i];
        else alpha2[s1[i] - 'A'] = s2[i];
    }
    for(i=0; i<26; i++) {
        printf("'%c', '%c',\n", 'a'+i, alpha1[i]);
    }
    for(i=0; i<26; i++) {
        printf("'%c', '%c',\n", 'A'+i, alpha2[i]);
    }

    return 0;
}
/*
CARScarsIuVEJxTXsUvOHhngyZKfAYmaqolMNtGQibwdjPrCpekFWzLaySBaPybRMgzYMynY
UnilEPFLvpVZzBNtLSCubWmaocIYneAPqxDshRkMGgJfHrFUQTjXOwdPolyProgisawesome
*/
