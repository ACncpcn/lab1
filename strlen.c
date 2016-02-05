#include <stdio.h>

int stringlength(char string[]);

int main()
{
	char str[] = "The quick brown box";

	printf("The length of the string '%s' is %d\n",
		str, stringlength(str));
}

int stringlength(char string[])
{
	int i;
	i = 0;
	while (string[i]!= '\0')
	{
		i++;
	}

	return i;
}