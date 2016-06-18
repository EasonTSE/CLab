#include <stdlib.h>
#include <stdio.h>

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

void MaxIncome(struct Sales *salePtr, int SalesNum)
{
	struct Sales *pos = salePtr;
	struct Sales *max_pos;
	int max = pos->Total;
	int i;
	
	for (i = 0; i < SalesNum; i++)
	{
		if (pos->Total > max)
		{
			max = pos->Total;
			max_pos = pos;
		}
		pos++;
	}
	
	extern struct Sales *MaxIncomePerson;
	MaxIncomePerson = max_pos;
	
	printf("=====總銷售額最高的營業員=====\n");
	printf("銷售員姓名=>%s\n", MaxIncomePerson->SalesData.SalesName);
	printf("銷售員職位=>%s\n", MaxIncomePerson->SalesData.SalesPosition);
	printf("產品A的銷售數量=>%d個\n", MaxIncomePerson->ProductA);
	printf("產品B的銷售數量=>%d個\n", MaxIncomePerson->ProductB);
	printf("產品C的銷售數量=>%d個\n", MaxIncomePerson->ProductC);
	printf("總銷售額=>%d元\n", MaxIncomePerson->Total);
}
