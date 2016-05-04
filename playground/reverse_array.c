#include <stdio.h>
#include <stdlib.h>

void show(int [], int);

int main()
{
	int i, tmp, arr1[4] = {10,20,30,40}, arr2[4];
	int len = sizeof(arr1) / sizeof(int);
	int end = len - 1;

	printf("arr1: ");
	show(arr1,len);

	for (i = 0; i < len; i++)
	{
		tmp = arr1[i];
		arr2[i] = arr1[end];
		arr2[end] = tmp;
		end--;
	}

	printf("arr2: ");
	show(arr2,len);

	return 0;
}

void show(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
