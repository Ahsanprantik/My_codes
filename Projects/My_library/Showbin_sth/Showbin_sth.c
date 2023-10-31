
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
Date created: 13/12/2015
Status: Implemented.
*/
