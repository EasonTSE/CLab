#include <stdio.h>
#include <stdlib.h>

float max(float[], int);
float average(float[], int);
void show(float[], int);

int main(void)
{
	float data[] = {26,5.8,81.9,7,63,121.3,121.4};
	int len = sizeof(data) / sizeof(float);

	printf("�}�C�����Ӽ�: %d\n", len);
	printf("�}�C���e:\n");
	show(data,len);
	printf("�}�C���̤j�ȬO: %.2f\n", max(data,len));
	printf("�}�C�ƭȪ������ȬO: %.2f\n", average(data,len));

	return 0;
}

void show(float a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%.2f ", a[i]);
	printf("\n");
}

float max(float a[], int n)
{
	int i;
	float largest = 0;
	for (i = 0; i < n; i++)
		if (a[i] > largest)
			largest = a[i];
	return largest;
}

float average(float a[], int n)
{
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum/n;
}
