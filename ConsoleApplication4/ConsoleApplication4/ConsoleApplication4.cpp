#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* example of a "D array test */
int main()
{
	int arr1[7][8];/* 2D array */
	int i, j, k, l;
	printf("enter number of rows and columns (max 7 rows max 8 columns) \n");
	scanf("%d %d", &k, &l);
	if (k > 7 || l > 8)
	{
		printf("error - max of 8 for rows or 7 for columns \n");
	}
	else
	{
		printf("enter array\n");
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < l; j++)
			{
				scanf("%d ", &arr1[i][j]);
			}
		}
		printf("Your array is\n");
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < l; j++)
			{
				printf("%d ", arr1[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}