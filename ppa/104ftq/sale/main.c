#include <stdio.h>
#include <stdlib.h>

struct SalesRData
{
	char SalesName[20];
	char SalesPosition[50];
};

struct Sales
{
	struct SalesRData SalesData;
	int ProductA;
	int ProductB;
	int ProductC;
	int Total;
};

struct Sales *MaxIncomePerson;
int ProductIncome[3];

int main()
{
	struct Sales CompanySale[3] = {
		{{"Andy", "�g�z"}, 45, 30, 50, (35*45 + 14*30 + 28*50)},
		{{"Cindy", "�~�ȭ�"}, 60, 70, 80, (35*60 + 14*70 + 28*80)},
		{{"Tom", "�uŪ��"}, 25, 80, 54, (35*25 + 14*80 + 28*54)}
	};
	
	int i;
	for(i = 0; i < 3; i++)
		ProductIncome[i] = CompanySale[i].Total;
	
	MaxIncome(CompanySale,3);
	computeComIncome(CompanySale,3);
	
	sort(CompanySale,3);
		
	printf("=====�Ƨǫ���=====\n");
	printSales(CompanySale, 3);
	 
	return 0;
}
