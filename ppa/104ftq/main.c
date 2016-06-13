#include <stdlib.h>
#include <stdio.h>

struct SalesRData
{
	char SalesName[20];
	char SalesPosition[20];
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
	struct Sales CompanySale[3] = 
	{
		{{"Andy", "經理"}, 45, 30, 50, (45*35 + 30*14 + 50*28)},
		{{"Cindy", "業務員"}, 60, 70, 80, (60*35 + 70*14 + 80*28)},
//		{{"Tom", "工讀生"}, 25, 80, 54, (25*35 + 80*14 + 54*14)}
	};
	
	printf("%d\n", sizeof(CompanySale) / sizeof(struct Sales));
	
	int i;
	for(i = 0; i < 3; i++)
		ProductIncome[i] = CompanySale[i].Total;

	for(i = 0; i < 3; i++)
		printf("%d ", ProductIncome[i]);
	printf("\n");
	
	return 0;
}
