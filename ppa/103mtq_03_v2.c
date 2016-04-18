#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double monthPaymoney(int, double, int );
double moneyPaymonth(int, int, double, int );
void vs(double,double);

int main(int argc, const char* argv[])
{
	int price,month,i,balance;
	double r,monthpay = 0,sum1,sum2;
	do
	{
		printf("請輸入房貸金額:");
		scanf("%d",&price);
		printf("請輸入房貸期數:");
		scanf("%d",&month);
		printf("請輸入月利率:");
		scanf("%lf",&r);
	} while(price < 0 || month < 0 || r < 0);
	balance = price;
	printf("====本息平均攤還法====\n");
	sum1 = monthPaymoney(price,r,month);
	printf("每月應繳金額:%lf\n",sum1);
	printf("到期時還款金額:%lf\n",sum1 * month);
	printf("利息約為:%lf\n",sum1 * month - price);
	printf("====本金平均攤還法====\n");
	for(i = 1; i < month + 1; i++)
	{
		monthpay = moneyPaymonth(price,balance,r,month);
		balance = balance - price / month;
		printf("第%d期應繳金額為:%lf\n",i,monthpay);
		sum2 += monthpay;
	}
	printf("到期時還款總額:%lf,利息約為%lf\n",sum2,sum2 - price);
	vs(sum1,sum2);

	return 0;
}
double monthPaymoney(int p, double r, int month)
{
	double monthpay;
	monthpay = p * pow(1 + r,(double)month) * r / (pow(1 + r,(double)month) - 1);
	return monthpay;
}
double moneyPaymonth(int p, int balance, double r, int month)
{
	double monthpay;
	monthpay = p / month + balance * r;
	return monthpay;
}
void vs (double sum1,double sum2)
{
	if (sum1 < sum2)
		printf("本息平均攤還法利息較高所以採本金平均攤還法較好");
	else
		printf("本金平均攤還法利息較高所以採本息平均攤還法較好");
}
