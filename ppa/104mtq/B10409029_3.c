# include <stdio.h>
# include <stdlib.h>

int calculate(double,double);

int main()
{
	double rate, payment;

	printf("�п�J�C�Ӥ�Q�v�P�ͬ���X\n");
	scanf("%lf %lf", &rate, &payment);

	printf("%d�Ӥ��ͬ��O�N������\n", calculate(rate,payment));

	return 0;
}

int calculate(double rate, double payment)
{
	double p = 50000;
	int n;

	for (n = 1; p >= payment; n++)
	{
		p = p * (1 + rate) - payment;
		printf("��%d�Ӥ��: %.2lf\n", n,p);
	}
	return n-1;
}

