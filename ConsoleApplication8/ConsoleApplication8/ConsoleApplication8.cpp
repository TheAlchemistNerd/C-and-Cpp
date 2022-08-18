#include<stdio.h>
#define __STDC_WANT_LIB_EXT1__ 1
#include<string.h>

int main()
{
	char str1[50] = "To be, or not to be, ";
	char str2[] = "that is the question.";
	int retval = strncat_s(str1, sizeof(str1), str2, 4);
	if (retval)
		printf("There was an error joining the strings. Error code = %d", retval);
	else
		printf("The combined strings:\n%s\n", str1);
}