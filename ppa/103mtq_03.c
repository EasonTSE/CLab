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

	printf("請輸入房貸金額：");
	scanf(" %lf", &p);

	printf("請輸入分期期數：");
	scanf(" %d", &N);

	printf("請輸入月利率：");
	scanf(" %lf", &r);

	printf("\n=====本息平均攤還法=====\n");
	printf("每月繳金額為：%.3f元\n", monthPaymoney(p,r,N));

	double total = monthPaymoney(p,r,N) * N;
	printf("到期時還款總額為：%.3f元，利息約為%.3f元\n", total, total - p);

	printf("\n=====本金平均攤還法=====\n");

	int balance = p;
	double total2 = 0;
	for (int i = 1; i <= N; i++)
	{
		//printf("balance = %lf\n", balance);
		double payment = moneyPaymonth(p, balance, r, N);
		printf("第%d期應繳金額為：%.3lf元\n", i, payment);
		balance -= p / N;
		total2 += payment;
	}
	printf("到期時還款總額約為%.3lf元，利息約為%.3lf元\n", total2, total2 - p);

	if (total > total2)
		printf("本息平均攤還法需付利息較高，所以，採本金平均攤還法較划算！\n");
	else if (total2 > total)
		printf("本金平均攤還法需付利息較高，所以，採本息平均攤還法較划算！\n");

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
