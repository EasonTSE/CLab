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
	
	printf("=====�`�P���B�̰�����~��=====\n");
	printf("�P����m�W=>%s\n", MaxIncomePerson->SalesData.SalesName);
	printf("�P���¾��=>%s\n", MaxIncomePerson->SalesData.SalesPosition);
	printf("���~A���P��ƶq=>%d��\n", MaxIncomePerson->ProductA);
	printf("���~B���P��ƶq=>%d��\n", MaxIncomePerson->ProductB);
	printf("���~C���P��ƶq=>%d��\n", MaxIncomePerson->ProductC);
	printf("�`�P���B=>%d��\n", MaxIncomePerson->Total);
}
