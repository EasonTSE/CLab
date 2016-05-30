# include <stdlib.h>
# include <stdio.h>

int square_sum(int *, int);
void show(int *, int);

int main()
{
	int a[]={1,2,3,4,5};
	int len = sizeof(a) / sizeof(int);
	printf("Before:\n");
	show(a,len);
	
	int tmp = square_sum(a,len);
	
	printf("After:\n");
	show(a,len);
	
	printf("sum = %d\n", tmp);
	
	return 0;
}

void show(int *ptr, int n)
{
	int i;
	for (i=0; i<n; i++)
		printf("%d ",*(ptr+i));
	printf("\n");
}

int square_sum(int *arr, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
	{
		*(arr+i) *= *(arr+i);
		sum += *(arr+i);
	}
	return sum;
}
