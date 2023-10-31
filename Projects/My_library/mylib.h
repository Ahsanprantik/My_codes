#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED



#endif // MYLIB_H_INCLUDED

/*
This function shows binary allocation(integer form) of a variable up to 64th bit. 1 initialized index.
*/
void showbin(const long long i, int bit)
{
    unsigned long long temp;

    temp=1;

    if(bit>64)  {
        printf("Error: Bit location unaccessible.");
        return;
    }

    bit--;

    for(temp<<=bit; temp!=0; temp>>=1)   {
		printf("%d", (temp & i)!=0);
    }

    return;
}

/*
This function shows and returns the value of 's'th bit(Up to 64th bit).
Initialized by 0.
*/
int showbin_sth(const long long i, int bit)
{
    unsigned long long temp, ret;

    temp=1;

    if(bit>64)  {
        printf("Error: Bit location unaccessible.");
        return -1;
    }

	temp<<=bit;

	ret=((temp & i)!=0);

	printf("%d", ret);

    return ret;
}

/*
This function returns index of a character if it is found in the string; -1 if it is not.
If contained twice returns index of the first one.
0 based index.
*/
int string_check(const char *s, const char c)
{
	int i=0;
	while(s[i])	{
		if(s[i]==c)	{
			return i;
		}
		i++;
	}
	return -1;
}
