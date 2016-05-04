# include <stdio.h>
# include <stdlib.h>

void replace(int [], int);
void show(int [],int);

int main()
{
	int A[7] = {10,-5,6,54,-42,12,35};
	int len = sizeof(A) / sizeof(int);

	printf("A:\n");
	show(A,len);

  replace(A,len);

	printf("After swapping:\n");
  show(A,len);

  return 0;
}

void show(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}

void replace(int arr[], int n)
{
	int i, tmp1 = 0, tmp2, swap;

	for (i = 0; i < n; i++)
		if (arr[i] < 0 && tmp1 == 0)
			tmp1 = i;
    else if (arr[i] < 0)
      tmp2 = i;

  swap = arr[tmp1];
  arr[tmp1] = arr[tmp2];
  arr[tmp2] = swap;
}
