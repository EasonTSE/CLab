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

void computeComIncome(struct Sales *saleptr, int salesNum)
{
	struct Sales *ptr = saleptr;
	int i;
	int pdA = 0, pdB = 0, pdC = 0;
	
	for (i = 0; i < salesNum; i++)
	{
		pdA += ptr->ProductA;
		pdB += ptr->ProductB;
		pdC += ptr->ProductC;
		ptr++;
	}
	
	extern int ProductIncome[3];
	
	ProductIncome[0] = pdA * 35;
	ProductIncome[1] = pdB * 14;
	ProductIncome[2] = pdC * 28;
	
	printf("=====���q�U���~���P��q�ξP���B=====\n");
	printf("���~A���P��ƶq%d��, �`�P���B%d��\n", pdA, ProductIncome[0]);
	printf("���~B���P��ƶq%d��, �`�P���B%d��\n", pdB, ProductIncome[1]);
	printf("���~C���P��ƶq%d��, �`�P���B%d��\n", pdC, ProductIncome[2]);	
}
