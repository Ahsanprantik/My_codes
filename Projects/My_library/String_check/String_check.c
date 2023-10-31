
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
/*
Date created: 09/12/2015
Status: Implemented.
*/
