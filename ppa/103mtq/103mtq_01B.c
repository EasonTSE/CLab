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
		printf("請輸入兩個1～30之間的正整數：");
		scanf("%d %d", &num1, &num2);
	} while (isValid(num1,num2) == 'N');

	printf("數列中第 %d 個到第 %d 個數為：\n", num1, num2);

	int i;
	for (i = num1; i <= num2; i++)
		printf("%.3f ", GetSeriesN(i));
	printf("\n");

	int x,y;
	printf("請輸入x值：");
	scanf(" %d", &x);
	printf("iSum(%d)=%f\n", x, iSum(x));

	printf("請輸入y值：");
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
