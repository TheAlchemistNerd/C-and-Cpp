#include<stdio.h>
#define __STDC_WANT_LIB_EXT1
#include<string.h>

int main()
{
	char source[] = "Only the mediocre are always at their best.";
	char destination[50];
	if (strcpy_s(destination, sizeof(destination), source))
		printf("An error occurred coping the string.\n");
	printf(destination);

	if (strncpy_s(destination, sizeof(destination), source, 17))
		printf("An error occurred coping the string.\n");
	printf(destination);
}