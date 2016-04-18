# include <stdio.h>
# include <stdlib.h>

double GetSeriesN(int);
char isValid(int, int);
double iSum(int);
double rSum(int);

int main()
{
	int num1, num2;

	do {
		printf("�п�J���1��30����������ơG");
		scanf("%d %d", &num1, &num2);
	} while (isValid(num1,num2) == 'N');

	printf("�ƦC���� %d �Ө�� %d �ӼƬ��G\n", num1, num2);

	int i;
	for (i = num1; i <= num2; i++)
		printf("%.3f ", GetSeriesN(i));
	printf("\n");

	int x,y;
	printf("�п�Jx�ȡG");
	scanf(" %d", &x);
	printf("iSum(%d)=%f\n", x, iSum(x));

	printf("�п�Jy�ȡG");
	scanf(" %d", &y);
	printf("rSum(%d)=%f\n", y, rSum(y));

	return 0;
}

char isValid(int x, int y)
{
	if (x < 1 || x > 30)
		return 'N';
	else if ( y < 1 || y > 30)
		return 'N';
	else
		return 'Y';
}

double GetSeriesN(int n)
{
	if (n > 0)
		return ((double)(n + 1) / (double)(n + 2)) * GetSeriesN(n - 1);
	else
		return 1;
}

double iSum(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += GetSeriesN(i);
	return sum;
}

double rSum(int n)
{
	if (n > 0)
		return GetSeriesN(n) + rSum(n-1);
	else
		return 0;
}
