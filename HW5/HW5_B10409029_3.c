# include <stdlib.h>
# include <stdio.h>

void bubble_sort(int arr[], int len);

int main()
{
	int arr[10], i;
	
	for (i=0; i<10; i++)
	{
		printf("�п�J��%d�ӼƦr: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	bubble_sort(arr,10);
	
	for (i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	printf("�Ĥ@�j���Ƭ�: %d\n", arr[0]);
	printf("�ĤG�j���Ƭ�: %d\n", arr[1]);
	
	return 0;
}

void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
