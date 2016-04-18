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
		printf("�п�J�жU���B:");
		scanf("%d",&price);
		printf("�п�J�жU����:");
		scanf("%d",&month);
		printf("�п�J��Q�v:");
		scanf("%lf",&r);
	} while(price < 0 || month < 0 || r < 0);
	balance = price;
	printf("====���������u�٪k====\n");
	sum1 = monthPaymoney(price,r,month);
	printf("�C����ú���B:%lf\n",sum1);
	printf("������ٴڪ��B:%lf\n",sum1 * month);
	printf("�Q������:%lf\n",sum1 * month - price);
	printf("====���������u�٪k====\n");
	for(i = 1; i < month + 1; i++)
	{
		monthpay = moneyPaymonth(price,balance,r,month);
		balance = balance - price / month;
		printf("��%d����ú���B��:%lf\n",i,monthpay);
		sum2 += monthpay;
	}
	printf("������ٴ��`�B:%lf,�Q������%lf\n",sum2,sum2 - price);
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
		printf("���������u�٪k�Q�������ҥH�ĥ��������u�٪k���n");
	else
		printf("���������u�٪k�Q�������ҥH�ĥ��������u�٪k���n");
}
