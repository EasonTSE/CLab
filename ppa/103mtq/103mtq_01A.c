# include <stdio.h>
# include <stdlib.h>

double GetSeriesN(int n);
int isValid(int, int);

int main()
{
	int num1, num2;

	do {
		printf("�п�J���1��30����������ơG");
		scanf("%d %d", &num1, &num2);
	} while (isValid(num1,num2) == 0);

	printf("�ƦC���� %d �Ө�� %d �ӼƬ��G\n", num1, num2);

	int i;
	for (i = num1; i <= num2; i++)
		printf("%.3f ", GetSeriesN(i));

	printf("\n");

	return 0;
}

int isValid(int x, int y)
{
	if (x < 1 || x > 30)
		return 0;
	else if ( y < 1 || y > 30)
		return 0;
	else
		return 1;
}

double GetSeriesN(int n)
{
	if (n > 0)
		return ((double)(n + 1) / (double)(n + 2)) * GetSeriesN(n - 1);
	else
		return 1;
}
