# include <stdio.h>
# include <stdlib.h>

int calculate(double,double);

int main()
{
	double rate, payment;

	printf("請輸入每個月利率與生活支出\n");
	scanf("%lf %lf", &rate, &payment);

	printf("%d個月後生活費將不夠用\n", calculate(rate,payment));

	return 0;
}

int calculate(double rate, double payment)
{
	double p = 50000;
	int n;

	for (n = 1; p >= payment; n++)
	{
		p = p * (1 + rate) - payment;
		printf("第%d個月剩: %.2lf\n", n,p);
	}
	return n-1;
}
