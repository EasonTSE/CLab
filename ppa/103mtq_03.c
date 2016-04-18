# include <math.h>
# include <stdio.h>
# include <stdlib.h>

double power(double, int);
double monthPaymoney(int, double, int);
double moneyPaymonth(int, int, double, int);

int main()
{
	double p, r;
	int N;

	printf("�п�J�жU���B�G");
	scanf(" %lf", &p);

	printf("�п�J�������ơG");
	scanf(" %d", &N);

	printf("�п�J��Q�v�G");
	scanf(" %lf", &r);

	printf("\n=====���������u�٪k=====\n");
	printf("�C��ú���B���G%.3f��\n", monthPaymoney(p,r,N));

	double total = monthPaymoney(p,r,N) * N;
	printf("������ٴ��`�B���G%.3f���A�Q������%.3f��\n", total, total - p);

	printf("\n=====���������u�٪k=====\n");

	int balance = p;
	double total2 = 0;
	for (int i = 1; i <= N; i++)
	{
		//printf("balance = %lf\n", balance);
		double payment = moneyPaymonth(p, balance, r, N);
		printf("��%d����ú���B���G%.3lf��\n", i, payment);
		balance -= p / N;
		total2 += payment;
	}
	printf("������ٴ��`�B����%.3lf���A�Q������%.3lf��\n", total2, total2 - p);

	if (total > total2)
		printf("���������u�٪k�ݥI�Q�������A�ҥH�A�ĥ��������u�٪k���E��I\n");
	else if (total2 > total)
		printf("���������u�٪k�ݥI�Q�������A�ҥH�A�ĥ��������u�٪k���E��I\n");

	return 0;
}

double power(double r, int n)
{
	return pow(1 + r, (double)n * -1);
}

double monthPaymoney(int p, double r, int month)
{
	return (r / (1 - power(r,month))) * p;
}

double moneyPaymonth(int p, int balance, double r, int month)
{
	return p / month + balance * r;
}
