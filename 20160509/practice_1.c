# include <stdio.h>
# include <stdlib.h>

void bubble(int [],int);
void show(int [],int);
int bin_search(int [],int,int,int);
void input_to_array(int [],int);

int main()
{
	int len;

	printf("Input number of elements: ");
	scanf("%d", &len);

	int a[len];

	input_to_array(a,len);

	printf("Before sorting: \n");
	show(a,len);

	bubble(a,len);

	printf("After sorting: \n");
	show(a,len);

  return 0;
}

void show(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

void bubble(int a[], int len)
{
	int i,j,temp;
	for(i = 0; i < len - 1; i++)
		for(j = 0; j < (len - i); j++)
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
}

void input_to_array(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("Input element no.%d: ", i + 1);
		scanf(" %d", &arr[i]);
	}
}

int bin_search(int arr[], int low, int high, int target)
{
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] > target)
			high = mid - 1;
		else if (arr[mid] < target)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
